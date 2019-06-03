#include <bits/stdc++.h>
//Programação Avançada Turma:855
//Aluno: Luiz Augusto Monteiro Santiago.
	using namespace std;

int main(){
int contador,op,resposta,repeticao;
repeticao=0;
	do{
	contador=-1;
	resposta=0;
		if (repeticao==1){
		cout <<"Entao vamos novamente mortal"<<endl;
		cout <<" "<<endl;
		}if (repeticao==0){
	cout << "Bem vindo mortal"<<endl;
	cout << "Sou Namuras, o Mago supremo"<<endl;
	cout << "Protetor do mundo e de toda realidade"<<endl;
	cout << "Usarei meus poderes para uma magica incrivel"<<endl;
	cout << "Irei advinhar o numero que você esta pensando"<<endl;
	cout << "Pense em um numero"<<endl;
	cout << "Vamos la! "<<endl;
	}

do

{
	cout << ""<<endl;
	cout << ""<<endl;
	cout << "[1] O numero e 1 [2] O numero e par [3] O numero e impar"<<endl;
	cin >> op;
	switch (op) {
		case 1: 
			cout << ""<<endl;
			cout <<"Estou concentrando as energias do universo!"<<endl;
			cout <<"LEAM YREVE... "<<endl<<"RETFA HTEET"<<endl<<"RUOY HSURB... "<<endl<<"DNA SELBATEGEV!"<<endl<<"RUOY TAE"<<endl; 		//Eat your vegetables and brush your teeth after every meal
			cout <<".";
			cout <<".";
			cout <<"."<<endl;
			cout <<"Encontrei!"<<endl;
			cout <<""<<endl;
			contador += +1;
			resposta += +(pow(2,contador));
			cout <<"Seu numero e: "<<resposta<<endl;
			cout << ""<<endl;
			cout <<" Deseja tentar novamente"<<endl;
			cout <<" [1] SIM [2] NAO"<<endl;
			cin >>repeticao;
			
		break;
		
		case 2: 
			cout <<"Divida o numero por 2"<<endl;
			contador += +1;

		break;
		
		case 3:
			cout <<"Agora subtraia 1 e divida por 2"<<endl;
			contador += +1;
			resposta += +(pow(2,contador));
		
		break;
	}
}while(op!=1);	
}while(repeticao==1);
return 0;
}
