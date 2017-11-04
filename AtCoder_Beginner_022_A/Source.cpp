/*
問題文
高橋君は太りやすく痩せやすい体質です。そこで彼は N 日間の体重の変化量を記録してみました。
1 日目の高橋くんの体重は W キログラムでした。 i 日目 (2≦i≦N) の体重の変化量は Ai キログラムでした(Ai は負になり得ます)。 つまり i−1 日目の体重を X キログラムとすると、 i 日目の体重は X+Ai キログラムだったということです。
ところで、高橋君の個人的な価値観では、体重が S キログラム以上 T キログラム以下の体型が「ベストボディー」だと考えています。
体重を記録した N 日間のうち、高橋君がベストボディーであった日数を求めてください。
*/

#include<iostream>
#include<vector>

int main() {
	int Nday, Sweight, Tweight, Wfirst, Wchange, count = 0;
	std::vector<int> Achange;
	std::cin >> Nday >> Sweight >> Tweight;
	std::cin >> Wfirst;

	Wchange = Wfirst;
	Achange.resize(Nday - 1);
	if (Sweight <= Wchange && Wchange <= Tweight) {  //S< <T
		count++;
	}
	for (int i = 0; i < Nday - 1; i++) {
		std::cin >> Achange[i];
		Wchange += Achange[i];
		if (Sweight <= Wchange && Wchange <= Tweight) {  //S< <T
			count++;
		}
	}

	std::cout << count << std::endl;
	return 0;
}