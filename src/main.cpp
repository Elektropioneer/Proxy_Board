/* 
 * This file is part of the Middleware Board distribution (https://github.com/Elektropioneer/Middleware_Board).
 * Copyright (c) 2020 Miloš Zivlak (milos.zivlak@sensa-group.net).
 * 
 * This program is free software: you can redistribute it and/or modify  
 * it under the terms of the GNU General Public License as published by  
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include <Arduino.h>

void setup()
{
  pinMode(PC13, OUTPUT);
  pinMode(PB14, INPUT);
  pinMode(PB15, INPUT);

  Serial1.begin(9600);
}

void loop()
{
  if (!digitalRead(PB14))
  {
    Serial1.println("Switch 1");
  }

  if (!digitalRead(PB15))
  {
    Serial1.println("Switch 2");
  }

  return;

  if (digitalRead(PB15))
  {
    digitalWrite(PC13, HIGH);
  }
  else
  {
    digitalWrite(PC13, LOW);
  }

  return;

  digitalWrite(PC13, HIGH);
  delay(1000);
  digitalWrite(PC13, LOW);
  delay(1000);
}
