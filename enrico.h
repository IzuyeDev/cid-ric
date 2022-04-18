#include <cstdlib>
#include <string>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sys/cdefs.h>
#include <vector>
#include <time.h>
#include <cstring>
#include <unistd.h>
#include <stdint.h>
#include "json.hpp"
#include "packet.h"
#define byte uint8_t
#define BYTE uint8_t

//This Is The Customization Area

#pragma once
//Customing GrowID
string Growid_acc = "enricoimanuella";

//Customing Password
string Password_acc = "enricoij1@";

//Customing Gmail ( At least put a random gmail. Dont add @gmail.com )
string Gmail_acc = "enricoimanuella";

//Customing Port
int port = 17254;

//Customing Start From (Account)
int START_ACC = 1;

//Customing Start From (Gmail)
int START_GMAIL = +1;


//You can check the port in website http://growtopia2.com/growtopia/server_data.php
//the current port growtopia is 17198,17246,17249,17251,17253,17256,17258
//and you can check the created account in file acc.txt
//if want stop the script click CTRL+C
//this script has been modified by Enrico Imanuella
//you can support by subscribe channel youtube Enrico Imanuella
//Change the version growtopia in file config.json