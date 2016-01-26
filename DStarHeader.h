/*
*   Copyright (C) 2016 by Jonathan Naylor G4KLX
*
*   This program is free software; you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation; either version 2 of the License, or
*   (at your option) any later version.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program; if not, write to the Free Software
*   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#ifndef	DStarHeader_H
#define	DStarHeader_H

class CDStarHeader {
public:
	CDStarHeader(const unsigned char* header);
	~CDStarHeader();

	bool isRepeater() const;
	void setRepeater(bool on);

	void getMyCall1(unsigned char* call1) const;
	void getMyCall2(unsigned char* call2) const;

	void getRPTCall1(unsigned char* call1) const;
	void getRPTCall2(unsigned char* call2) const;

	void getYourCall(unsigned char* call) const;

	void get(unsigned char* header) const;

private:
	unsigned char* m_header;
};

#endif
