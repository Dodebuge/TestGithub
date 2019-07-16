int pow(const int& k){
	unsigned long long ret = 1;
	unsigned long long factor = k;
	int exp = k;
	while(exp){
		if (exp & 1)
			ret *= factor;
		exp >> = 1;
		factor *= factor;
		factor %= INF; //INF ���ǵ� ����
		ret %= INF;
	}
	return ret;
}
//��Ʈ������ ���� ���� ���

EX)
	101 = 5; -> 1�� AND ������ ���� RET = 5 FACTOR = 25
             FACTOR = 25 * 25////// 25 * 25 * 5 = 5^2 * 5^2 * 5 = 5^5

	11 = 3 -> RET = 3 FACTOR = 9 -> 3 * 9