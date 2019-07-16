int pow(const int& k){
	unsigned long long ret = 1;
	unsigned long long factor = k;
	int exp = k;
	while(exp){
		if (exp & 1)
			ret *= factor;
		exp >> = 1;
		factor *= factor;
		factor %= INF; //INF 정의된 변수
		ret %= INF;
	}
	return ret;
}
//비트연산을 통한 제곱 계산

EX)
	101 = 5; -> 1과 AND 연산을 통해 RET = 5 FACTOR = 25
             FACTOR = 25 * 25////// 25 * 25 * 5 = 5^2 * 5^2 * 5 = 5^5

	11 = 3 -> RET = 3 FACTOR = 9 -> 3 * 9