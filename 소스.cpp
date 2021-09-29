//*��ä��_��ǻ�ͼ���Ʈ����_20102088*//
#include<iostream>
using namespace std;

class TV {
	bool on;
	int channel;
	int volume;

public:
	
	void powerOn() {//TV���� ��
		on = true;
		cout << "TV ON" << endl;
		
	}
	void powerOff() {
		on = false;
		cout << "TV OFF" << endl;
	}
	void increaseChannel() {//ä�� 0~20���� ���� �� ä�� 20�� �ѱ�� �ٽ� 0����
		cout << "CAHNNEL UP" << endl;
		channel++;
		channel %= 21;

	}
	void decreaseChannel() {//ä�� 0���� ������ 20����
		cout << "CHANNEL DOWN" << endl;
		if (channel == 0)
			channel = 20;
		else
			channel--;
	}
	void increasVolume() {//���� 0~10����, 10�̻��� �ö�������.
			cout << "INCREASE VOLUME" << volume << endl;
			if (volume < 10)
				volume++;
		
	}
	void decreaseVolume() {//���� 0���� �� �������� ����.
			cout << "DECREASE VOLUME" << volume << endl;
			if (volume > 0)
				volume--;
		
    }
	void getChannel(int c) {//�Է��� ä�η� �̵�
		if (c > 0 && c < 21) {
			channel = c;
			cout << "CHANNEL" << c << endl;
		}
		else {
			cout << "�߸��� �Է�" << endl;
		}
	}
	void show_info() {//ä�ΰ� ���� ���
		cout << "CHANNEL:" << channel << ", VOLUME:" << volume << endl;
	}
};

void main() {
	TV* t = new TV();

	int menu;
	int ch;

	while (1) {
		cout << "1:CHANNEL + \t2:CHANNEL - \t3:ä�μ��� \t4:VOLUME +" << endl;
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