#ifndef ALLBOT_H
#define ALLBOT_H

#include "ALLBOT_AsyncServo.h"
/**
 *	\mainpage ALLBOT test documentation
 *  \section intro_sec Introduction
 *
 *	ALLBOT is an expandable robot system developed by Velleman for the arduino platform...
 *
 * \section install_sec Installation
 *
 *	\subsection step1 Step 1: Downloading the ALLBOT library
 *
 *	Download the ALLBOT library from github here: https://github.com/Velleman/ALLBOT-lib
 *
 *  \subsection step2 Step 2: Extracting and installing the ALLBOT library
 *  When the ZIP file is downloaded, extract it using windows explorer, 7ZIP, or any other unzipping software.
 * 	\warning
 *	Velleman is not responsible if you kill yourself in the process of installing this software!
 *
 */
class ALLBOT {
public:
	ALLBOT(int count);
	~ALLBOT();
	ALLBOT_AsyncServo& operator[](int i);
	void attach(int servo, int pin, int angle, bool flipped, int offset);
	void move(int servo, int angle);
	void animate(int speed);
protected:
private:
	ALLBOT_AsyncServo *_servo;
	int _count;
};

#endif