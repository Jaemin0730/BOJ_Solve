#include <bits/stdc++.h>
using namespace std;
#define u ios::sync_with_stdio(false); cin.tie(NULL)
#define fst first
#define snd second
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;

const int MAX_NUM = 100000;
vector<bool> is_prime(MAX_NUM, true);
vector<int> prime_prefix_sum(MAX_NUM, 0);


int main() {
    u;

    // 에라토스테네스의 체 및 누적 합 계산
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAX_NUM; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAX_NUM; j += i) {
                is_prime[j] = false;
            }
        }
    }

    // 누적 합 배열 생성
    prime_prefix_sum[0] = 0;
    for (int i = 1; i < MAX_NUM; ++i) {
        prime_prefix_sum[i] = prime_prefix_sum[i - 1] + (is_prime[i] ? 1 : 0);
    }

    int n;
    cin >> n;

    string grand_prize_name = "";
    int grand_prize_score = -1; // 최소 점수로 초기화

    string effort_award_name = "";
    int effort_award_score = INT_MAX; // 최대 점수로 초기화

    for (int i = 0; i < n; ++i) {
        string current_name, participant_id_str;
        cin >> current_name >> participant_id_str;

        int num_a = stoi(participant_id_str.substr(0, 5));
        int num_b = stoi(participant_id_str.substr(5, 5));
        
        int start_range = min(num_a, num_b);
        int end_range = max(num_a, num_b);

        int current_score = prime_prefix_sum[end_range] - prime_prefix_sum[start_range - 1];

        // 1등
        if (current_score > grand_prize_score) {
            grand_prize_score = current_score;
            grand_prize_name = current_name;
        } 
        else if (current_score == grand_prize_score) {
            if (current_name < grand_prize_name) {
                grand_prize_name = current_name;
            }
        }

        // 꼴찌
        if (current_score < effort_award_score) {
            effort_award_score = current_score;
            effort_award_name = current_name;
        } 
        else if (current_score == effort_award_score) {
            if (current_name < effort_award_name) {
                effort_award_name = current_name;
            }
        }
    }

    cout << grand_prize_name << "\n";
    cout << effort_award_name << "\n";
}