#include <Arduino.h>

void setup()	{
	init();
	Serial.begin(9600);
}

void printInput()	{
	int byteRead = Serial.read();
	while (byteRead == -1)	{
		byteRead= Serial.read();
	}
	if (byteRead == 13)	{
		// 13 == enter key
		Serial.print("\n\r");
	} else if (byteRead==8) {
		// 8 == backspace key
		Serial.print("\b \b");
	} else {
		Serial.print((char)byteRead);
	}
}

void test()	{
	int read = Serial.read();
	while (read == -1)	{
		read = Serial.read();
	}
	Serial.print((char) read);
}

int main()	{
	setup();

	while (true)	{
		printInput();
	}
	
	Serial.flush();

	return 0;
}
