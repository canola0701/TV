//*유채린_컴퓨터소프트웨어_20102088*//
#include<iostream>
using namespace std;

class TV {
	bool on;
	int channel;
	int volume;

public:
	
	void powerOn() {//TV켰을 때
		on = true;
		cout << "TV ON" << endl;
		
	}
	void powerOff() {
		on = false;
		cout << "TV OFF" << endl;
	}
	void increaseChannel() {//채널 0~20까지 있을 때 채널 20을 넘기면 다시 0으로
		cout << "CAHNNEL UP" << endl;
		channel++;
		channel %= 21;

	}
	void decreaseChannel() {//채널 0에서 내리면 20으로
		cout << "CHANNEL DOWN" << endl;
		if (channel == 0)
			channel = 20;
		else
			channel--;
	}
	void increasVolume() {//볼륨 0~10까지, 10이상은 올라가지않음.
			cout << "INCREASE VOLUME" << volume << endl;
			if (volume < 10)
				volume++;
		
	}
	void decreaseVolume() {//볼륨 0에서 더 내려가지 않음.
			cout << "DECREASE VOLUME" << volume << endl;
			if (volume > 0)
				volume--;
		
    }
	void getChannel(int c) {//입력한 채널로 이동
		if (c > 0 && c < 21) {
			channel = c;
			cout << "CHANNEL" << c << endl;
		}
		else {
			cout << "잘못된 입력" << endl;
		}
	}
	void show_info() {//채널과 볼륨 출력
		cout << "CHANNEL:" << channel << ", VOLUME:" << volume << endl;
	}
};

void main() {
	TV* t = new TV();

	int menu;
	int ch;

	while (1) {
		cout << "1:CHANNEL + \t2:CHANNEL - \t3:채널선택 \t4:VOLUME +" << endl;
		cout << "5:VOLUME - \t6:SELECT \t7:TV ON \t8:TV OFF" << endl;
		cin >> menu;

		switch (menu) {
		case 1:
			t->increaseChannel();
			break;
		case 2:
			t->decreaseChannel();
			break;
		case 3:
			cout << "input CHANNEL (0~20):";
			cin >> ch;
			t->getChannel(ch);
			break;
		case 4:
			t->increasVolume();
			break;
		case 5:
			t->decreaseVolume();
			break;
		case 6:
			t->show_info();
			break;
		case 7:
			t->powerOn();
			break;
		case 8:
			t->powerOff();
			break;


		
		}
	}
}