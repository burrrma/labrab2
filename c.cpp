#include<iostream>
#include<queue>

bool operatorMore(int a, int b){
	if(a == 0 && b == 9){
		return true;
	}
	if(a == 9 && b == 0){
		return false;
	}
	if(a > b){
		return true;
	}
	return false;
}

int main(){
	std::queue<int> player1;
	std::queue<int> player2;
	int tmp;
	std::string input;
	for(int i = 0; i < 5; i++){
		std::cin >> tmp;
		player1.push(tmp);
	}
        for(int i = 0; i < 5; i++){
		std::cin >> tmp;
                player2.push(tmp);
	}
	int p1;
	int p2;
	for(int i = 0; i < 1000000; i++){
		if(player1.empty()){
			tmp = -1;
			std::cout << "first" << " " << i << std::endl;
			break;
		}
                if(player2.empty()){
                        tmp = -1;
                        std::cout << "second" << " " << i << std::endl;
                        break;
                }

		p1 = player1.front();
		player1.pop();
		p2 = player2.front();
		player2.pop();
		if(operatorMore(p1, p2)){
			player1.push(p1);
			player1.push(p2);
		}
		if(operatorMore(p2, p1)){
                        player2.push(p1);
                        player2.push(p2);
                }
	}
	if(tmp != -1){
		std::cout << "botva" << std::endl;
	}
	return 0;
}
