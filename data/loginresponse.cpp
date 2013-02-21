/* Copyright 2013 MultiMC Contributors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "loginresponse.h"

LoginResponse::LoginResponse(const QString& username, const QString& sessionID, 
							 qint64 latestVersion, QObject *parent) :
	QObject(parent)
{
	this->username = username;
	this->sessionID = sessionID;
	this->latestVersion = latestVersion;
}

LoginResponse::LoginResponse()
{
	this->username = "";
	this->sessionID = "";
	this->latestVersion = 0;
}

LoginResponse::LoginResponse(const LoginResponse &other)
{
	this->username = other.getUsername();
	this->sessionID = other.getSessionID();
	this->latestVersion = other.getLatestVersion();
}

QString LoginResponse::getUsername() const
{
	return username;
}

void LoginResponse::setUsername(const QString& username)
{
	this->username = username;
}

QString LoginResponse::getSessionID() const
{
	return sessionID;
}

void LoginResponse::setSessionID(const QString& sessionID)
{
	this->sessionID = sessionID;
}

qint64 LoginResponse::getLatestVersion() const
{
	return latestVersion;
}

void LoginResponse::setLatestVersion(qint64 v)
{
	this->latestVersion = v;
}