// test1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
#include <random>

using namespace std;

char print(string num) {
    //cout << num << endl;
    cout << num;
    return 0;
}

int main()
{
    string name;
    cout << "こんにちは" << endl;
    print("名前を入力してください > ");
    cin >> name;
    //printf("どうも%s%さん", name);
    cout << "どうも" << name << " さん" << endl;
    return 0;
}
