/*----------------------------------------------------------------------------
 Copyright:      Radig Ulrich  mailto: mail@ulrichradig.de
 Author:         Radig Ulrich
 Remarks:        
 known Problems: none
 Version:        09.11.2007
 Description:    Html Seiten
 Modified:       G. Menke, 25.03.2009

 Dieses Programm ist freie Software. Sie k�nnen es unter den Bedingungen der 
 GNU General Public License, wie von der Free Software Foundation ver�ffentlicht, 
 weitergeben und/oder modifizieren, entweder gem�� Version 2 der Lizenz oder 
 (nach Ihrer Option) jeder sp�teren Version. 

 Die Ver�ffentlichung dieses Programms erfolgt in der Hoffnung, 
 da� es Ihnen von Nutzen sein wird, aber OHNE IRGENDEINE GARANTIE, 
 sogar ohne die implizite Garantie der MARKTREIFE oder der VERWENDBARKEIT 
 F�R EINEN BESTIMMTEN ZWECK. Details finden Sie in der GNU General Public License. 

 Sie sollten eine Kopie der GNU General Public License zusammen mit diesem 
 Programm erhalten haben. 
 Falls nicht, schreiben Sie an die Free Software Foundation, 
 Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA. 
------------------------------------------------------------------------------*/
#ifndef _WEBPAGE_H
#define _WEBPAGE_H

//****************************************************************************
//Dateien und Webseiten am ende dieser Seite in Tabelle eintragen !!!!!!!
//****************************************************************************


//----------------------------------------------------------------------------
//Dazustellende Webseite
PROGMEM const char Page1[] = {
"<html>"
  "<head>"
    "<meta http-equiv='Content-Type'content='text/html; charset=iso-8859-1'>"
    "<title>HAMNET Control System</title>"
    "<style type='text/css'><!--HTML {background-color:#FFFFFF;font-family: Comic Sans MS;}P, DIV, H1, H2 {font-family: verdana, arial; font-size: 11px;}FIELDSET {background-color: #D9D9CC;}H1 {background-color: #CCCCFF; padding-top:5px; padding-bottom:5px;font-size: 20px; color: #004060; font-weight:bold; letter-spacing: 8px;border-top: 2px solid #EEEEEE; border-left: 2px solid #EEEEEE;border-bottom: 2px solid #004060; border-right: 2px solid #004060;}H2 {font-size: 15px; padding-top: 20px; padding-left:50px; padding-right:50px;color:#004080; font-weight:bold;}P, H1, H2 {margin: 0px 0px 5px 0px;}--></style>"
  "</head>"
  "<body>"
    "<br>"
    "<table align='center' border='0' width='650'>"
      "<tbody>"
        "<tr><td colspan='1'><div align='center'><h1>HAMNET Control System</h1></div><br></td></tr>"
        "<tr valign='top'>"
          "<td>"
            "<fieldset>"
              "<legend>Digital OUT</legend>"
              "<form name='form1' method='post' action=''>"
                "<table style='text-align:center'>"
                  "<tr><td>Status</td><td></td><td>&nbsp;Umschalten&nbsp;</td><td>&nbsp;Puls&nbsp;</td></tr>"
                  "<tr><td><img src='%PINC0'></td><td>Output 01</td><td><input name='OUT' value='A' type='radio'></td><td><input name='OUT' value='M' type='radio'></td></tr>"
                  "<tr><td><img src='%PINC1'></td><td>Output 02</td><td><input name='OUT' value='B' type='radio'></td><td><input name='OUT' value='N' type='radio'></td></tr>"
                  "<tr><td><img src='%PINC2'></td><td>Output 03</td><td><input name='OUT' value='C' type='radio'></td><td><input name='OUT' value='O' type='radio'></td></tr>"
                  "<tr><td><img src='%PINC3'></td><td>Output 04</td><td><input name='OUT' value='D' type='radio'></td><td><input name='OUT' value='P' type='radio'></td></tr>"
                  "<tr><td><img src='%PINC4'></td><td>Output 05</td><td><input name='OUT' value='E' type='radio'></td><td><input name='OUT' value='Q' type='radio'></td></tr>"
                  "<tr><td><img src='%PINC5'></td><td>Output 06</td><td><input name='OUT' value='F' type='radio'></td><td><input name='OUT' value='R' type='radio'></td></tr>"
                  "<tr><td><img src='%PINC6'></td><td>Output 07</td><td><input name='OUT' value='G' type='radio'></td><td><input name='OUT' value='S' type='radio'></td></tr>"
                  "<tr><td><img src='%PINC7'></td><td>Output 08</td><td><input name='OUT' value='H' type='radio'></td><td><input name='OUT' value='T' type='radio'></td></tr>"
                  "<tr><td><img src='%PINA0'></td><td>Output 09</td><td><input name='OUT' value='I' type='radio'></td><td><input name='OUT' value='U' type='radio'></td></tr>"
                  "<tr><td><img src='%PINA1'></td><td>Output 10</td><td><input name='OUT' value='J' type='radio'></td><td><input name='OUT' value='V' type='radio'></td></tr>"
                  "<tr><td><img src='%PINA2'></td><td>Output 11</td><td><input name='OUT' value='K' type='radio'></td><td><input name='OUT' value='W' type='radio'></td></tr>"
                  "<tr><td><img src='%PINA3'></td><td>Output 12</td><td><input name='OUT' value='L' type='radio'></td><td><input name='OUT' value='X' type='radio'></td></tr>"
                "</table>"
                "<pre align='left'><input name='SUB' value='Senden' type='submit'></pre>"
              "</form>"
            "</fieldset>"
          "</td>"
        "</tr>"
		"<tr>"
		  "<td>"
		    "<fieldset>"
		    "<legend>Analog IN</legend>"
		      "<table>"
		        "<tr><td>ADC1 Temperatur 1 </td><td> = %VA@04 &deg;C</td></tr>"
		        "<tr><td>ADC2 Temperatur 2 </td><td> = %VA@05 &deg;C</td></tr>"
		        "<tr><td>ADC3 Spannung 1 </td><td> = %VA@06 mV</td></tr>"
		        "<tr><td>ADC4 Spannung 2 </td><td> = %VA@07 mV</td></tr>"
		      "</table>"
		    "</fieldset>"
		  "</td>"
		"</tr>"
        "<tr>"
          "<td colspan='1'>"
            "<p align='center'>IW3BWH &amp; OE5NVL &amp; OE5RNL &amp; OE5GHN - poweredbyoriginal sources from G. Menke 2009 and U. Radig </p>"
          "</td>"
        "</tr>"
      "</tbody>"
    "</table>"
  "</body>"
"</html>"
"%END"};
  
//----------------------------------------------------------------------------
//Status Seite
/*
PROGMEM const char Page4[] = {
 "<head>\r\n"
   "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=iso-8859-1\">\r\n"
   "<title>HAMNET Control System</title>\r\n"
   "<style type=\"text/css\">\r\n"
     "<!--"
     // "BODY {margin: 0 0 0 0; background-color: white; text-align:center;}\r\n"
     "HTML {background-color:#FFFFFF;font-family: Comic Sans MS;}\r\n\r\n"
     "P, DIV, H1, H2 {font-family: verdana, arial; font-size: 11px;}\r\n"
     "FIELDSET {background-color: #D9D9CC;}\r\n"
     "H1 {background-color: #CCCCFF; padding-top:5px; padding-bottom:5px;\r\n"
       "font-size: 20px; color: #004060; font-weight:bold; letter-spacing: 8px;\r\n"
       "border-top: 2px solid #EEEEEE; border-left: 2px solid #EEEEEE;\r\n"
       "border-bottom: 2px solid #004060; border-right: 2px solid #004060;}\r\n"
     "H2 {font-size: 15px; padding-top: 20px; padding-left:50px; padding-right:50px;\r\n"
       "color:#004080; font-weight:bold;}\r\n"
     "P, H1, H2 {margin: 0px 0px 5px 0px;}\r\n"
     "-->"
   "</style>\r\n"
 "</head>\r\n"
 "<body>\r\n"
 "<br>\r\n"
 "<table align=\"center\" width=\"650\" border=\"0\">\r\n"
   "<tr>\r\n"
     "<td>\r\n"
       "<div align=\"center\">\r\n"
       "<h1>HAMNET Control System</h1>\r\n"
	   "<br>\r\n"
	   "<h2>Status</h2>\r\n"
       "</div>\r\n"
	   "<br>\r\n"
     "</td>\r\n"
   "</tr>\r\n"
   "<tr>\r\n"
     "<td>\r\n"
       "<br>\r\n"
	   "<p>\r\n"
       "Compiliert: "__DATE__" um " __TIME__"<BR>\r\n"
	   "Compiler: GCC Version "__VERSION__"\r\n"
       "</p>\r\n"
     "</td>\r\n"
   "</tr>\r\n"
   "<tr>\r\n"
     "<td>\r\n"
       "<br>\r\n"
       "<p>Besucher seit Start des Webservers: %VA@09</p>\r\n"
     "</td>\r\n"
   "</tr>\r\n"
   "<tr>\r\n"
     "<td>\r\n"
       "<br>\r\n"
       "<p><a href=\"index.htm\">Hauptseite</a></p>\r\n"
     "</td>\r\n"
   "</tr>\r\n"
   "<tr>\r\n"
     "<td>\r\n"
       "<br>\r\n"
       "<p>\r\n"
	   "G. Menke 2009 - powered by sources from U. Radig\r\n"
	   "</p>\r\n"
     "</td>\r\n"
   "</tr>\r\n"
 "</body>\r\n"
"</html>\r\n"
"%END"};
*/

//----------------------------------------------------------------------------
//Das GIF Bild f�r LED on
PROGMEM const char led_on[] = 
	{
	0x47,0x49,0x46,0x38,0x39,0x61,0x11,0x00,0x11,0x00,0xA5,0x3F,0x00,0x4D,0x4D,0x4D,
	0x50,0x50,0x4F,0x54,0x54,0x54,0x41,0x6A,0x44,0x5C,0x5C,0x5C,0x3F,0x73,0x42,0x62,
	0x62,0x62,0x6A,0x6B,0x6B,0x16,0xA7,0x1E,0x6F,0x6F,0x6F,0x5F,0x7A,0x60,0x19,0xAD,
	0x21,0x1C,0xB2,0x25,0x56,0x94,0x59,0x7B,0x7B,0x7B,0x1A,0xBD,0x23,0x23,0xBA,0x2C,
	0x1B,0xC3,0x25,0x83,0x83,0x83,0x1C,0xCA,0x26,0x7C,0x8B,0x7D,0x1C,0xD3,0x26,0x8B,
	0x8B,0x8B,0x2D,0xCC,0x36,0x1C,0xD8,0x26,0x1D,0xDF,0x28,0x90,0x91,0x91,0x1D,0xE1,
	0x28,0x1E,0xE2,0x29,0x21,0xE2,0x2C,0x35,0xDB,0x3F,0x2E,0xE4,0x38,0x9C,0x9D,0x9D,
	0x3E,0xE6,0x47,0x40,0xE6,0x49,0xA5,0xA5,0xA5,0x47,0xE7,0x50,0x50,0xE4,0x58,0xA9,
	0xA9,0xA9,0x4E,0xE8,0x56,0xAE,0xAE,0xAD,0xAF,0xB0,0xAF,0xB0,0xB0,0xB0,0x64,0xE6,
	0x6B,0xB4,0xB4,0xB5,0xB8,0xB8,0xB9,0x6C,0xEC,0x73,0x77,0xED,0x7D,0xBF,0xC0,0xBF,
	0xC0,0xC0,0xC0,0xC2,0xC2,0xC2,0xA6,0xDA,0xA9,0xC9,0xC8,0xC9,0x93,0xF1,0x98,0xCC,
	0xCC,0xCC,0xD1,0xD1,0xD1,0xA5,0xF3,0xA9,0xD5,0xD5,0xD5,0xDE,0xDE,0xDE,0xE0,0xE0,
	0xE0,0xC5,0xF7,0xC8,0xE7,0xE7,0xE7,0xEF,0xEF,0xEF,0xFF,0xFF,0xFF,0x21,0xF9,0x04,
	0x01,0x0A,0x00,0x3F,0x00,0x2C,0x00,0x00,0x00,0x00,0x11,0x00,0x11,0x00,0x00,0x06,
	0xED,0xC0,0x9F,0x50,0xD8,0xCB,0xC9,0x54,0xA9,0x96,0x6D,0xC8,0xFC,0xF9,0x74,0x37,
	0x1A,0x8C,0x65,0x02,0x69,0x40,0xB4,0xA6,0x6F,0xA7,0x2B,0x2D,0x10,0xE0,0xC5,0x45,
	0xE2,0x68,0x0D,0x7D,0xBB,0x19,0x23,0xE2,0x09,0x7D,0x32,0x95,0xC7,0xA2,0x91,0x80,
	0x09,0x75,0x3A,0xC6,0xC5,0xF5,0x72,0x9D,0x3E,0x1B,0x15,0x13,0x0B,0x09,0x12,0x3F,
	0x3D,0x37,0x1E,0x11,0x2B,0x35,0x38,0x35,0x2E,0x22,0x1D,0x1B,0x18,0x0F,0x10,0x06,
	0x2C,0x39,0x34,0x0B,0x1E,0x2F,0x38,0x3C,0x38,0x2F,0x24,0x1D,0x1B,0x1B,0x15,0x0B,
	0x06,0x16,0x32,0x30,0x08,0x21,0x2E,0x35,0x38,0x35,0x2E,0x22,0x1C,0xA4,0x18,0x08,
	0x04,0x07,0x2A,0x2C,0x08,0x1F,0x27,0x2E,0x2F,0x2E,0x27,0x1F,0xA4,0x1B,0x19,0x08,
	0x04,0x02,0x29,0x26,0x08,0x19,0x1F,0x22,0x24,0x22,0x1F,0xC4,0x1B,0x19,0x08,0x02,
	0x06,0x2D,0x20,0x0B,0x18,0x1B,0x1D,0xDE,0xD3,0x1B,0x15,0x0B,0x02,0x12,0x36,0x1A,
	0x10,0x0F,0xE0,0xD3,0x11,0x10,0x00,0x28,0x3F,0x20,0x14,0x0B,0x13,0xEA,0x1B,0x13,
	0x0B,0x03,0x09,0x42,0x34,0x0E,0x0D,0x0B,0x0F,0x18,0x32,0x6C,0xC8,0x80,0xE1,0xC1,
	0x82,0x02,0x00,0x58,0x0C,0x69,0x91,0x40,0x01,0x84,0x05,0x60,0x10,0x2C,0x60,0x10,
	0x00,0xC0,0x08,0x26,0x3F,0x62,0x48,0x30,0x60,0x80,0x00,0x01,0x01,0x02,0x00,0x24,
	0x60,0x81,0x71,0x08,0x0B,0x0B,0x07,0x04,0x18,0x90,0x80,0x02,0x63,0x10,0x00,0x3B,
	'%','E','N','D'};
	
//----------------------------------------------------------------------------
//Das GIF Bild f�r den LED off
PROGMEM const char led_off[] =
	{
	0x47,0x49,0x46,0x38,0x39,0x61,0x11,0x00,0x11,0x00,0xA5,0x3F,0x00,0x4D,0x4D,0x4D,
	0x50,0x50,0x50,0x52,0x52,0x52,0x54,0x54,0x54,0x57,0x56,0x57,0x5A,0x5A,0x59,0x5D,
	0x5D,0x5D,0x5E,0x5D,0x5D,0x5E,0x5E,0x5E,0x60,0x60,0x60,0x62,0x62,0x62,0x63,0x63,
	0x63,0x64,0x64,0x64,0x65,0x65,0x65,0x69,0x69,0x69,0x6E,0x6E,0x6E,0x70,0x70,0x70,
	0x77,0x77,0x77,0x78,0x78,0x78,0x7A,0x7A,0x7A,0x7B,0x7B,0x7B,0x7E,0x7E,0x7E,0x7F,
	0x7F,0x7F,0x80,0x80,0x80,0x81,0x81,0x81,0x83,0x83,0x83,0x87,0x87,0x87,0x89,0x89,
	0x89,0x8B,0x8B,0x8B,0x8E,0x8E,0x8E,0x90,0x91,0x91,0x91,0x91,0x92,0x93,0x93,0x93,
	0x97,0x97,0x97,0x9A,0x9A,0x9A,0x9C,0x9C,0x9C,0xA5,0xA5,0xA5,0xA9,0xA9,0xA9,0xAB,
	0xAB,0xAB,0xAC,0xAC,0xAC,0xAE,0xAE,0xAD,0xAF,0xAF,0xAF,0xAF,0xB0,0xAF,0xB0,0xB0,
	0xB0,0xB2,0xB2,0xB2,0xB4,0xB4,0xB4,0xB4,0xB4,0xB5,0xB5,0xB5,0xB5,0xB8,0xB8,0xB9,
	0xBF,0xC0,0xBF,0xBF,0xC0,0xC0,0xC0,0xC0,0xC0,0xC2,0xC2,0xC2,0xC8,0xC8,0xC8,0xC9,
	0xC9,0xC9,0xCC,0xCC,0xCC,0xD1,0xD1,0xD1,0xD5,0xD5,0xD5,0xDD,0xDD,0xDD,0xDE,0xDF,
	0xDE,0xE0,0xE0,0xE0,0xE7,0xE7,0xE7,0xEF,0xEF,0xEF,0xFF,0xFF,0xFF,0x21,0xF9,0x04,
	0x01,0x0A,0x00,0x3F,0x00,0x2C,0x00,0x00,0x00,0x00,0x11,0x00,0x11,0x00,0x00,0x06,
	0xEC,0xC0,0x9F,0x50,0xD8,0xCB,0xD1,0x56,0x2A,0xD8,0x6D,0xC8,0xFC,0xF9,0x76,0xB8,
	0x5A,0xEC,0x55,0x1A,0x79,0x46,0xB5,0xA6,0x8F,0xA7,0x13,0x35,0x10,0x06,0xC4,0x42,
	0xA3,0xA1,0xC0,0x86,0x3E,0xDE,0xCC,0x31,0xE9,0x7C,0x36,0x95,0x09,0xA4,0x11,0x81,
	0xC8,0x84,0x3B,0x9D,0xA3,0x73,0x62,0x9D,0x46,0x1B,0x16,0x16,0x12,0x0C,0x0F,0x18,
	0x3F,0x3D,0x38,0x1F,0x13,0x27,0x34,0x37,0x34,0x27,0x20,0x18,0x82,0x10,0x12,0x0A,
	0x2E,0x39,0x36,0x0D,0x1D,0x2C,0x37,0x3B,0x37,0x2C,0x21,0x19,0x82,0x13,0x0A,0x09,
	0x1C,0x34,0x31,0x08,0x1F,0x26,0x34,0x37,0x34,0x27,0x20,0x17,0x82,0x15,0x08,0x07,
	0x0E,0x2B,0x2F,0x06,0x1B,0x23,0x27,0x2C,0x27,0x23,0x1B,0x82,0x82,0x06,0x05,0x03,
	0x29,0x25,0x08,0x15,0x1B,0x20,0x21,0x20,0x1B,0xC3,0x16,0x15,0x08,0x04,0x0C,0x30,
	0x23,0x0B,0x13,0x16,0x18,0x19,0x18,0xD1,0x16,0x13,0x0A,0x02,0x19,0x37,0x1E,0x17,
	0x10,0xDF,0xD1,0x10,0x15,0x00,0x28,0x3F,0x23,0x1A,0x0D,0x12,0xE9,0x16,0x12,0x0A,
	0x01,0x0F,0x42,0x35,0x14,0x11,0x0C,0x10,0x13,0x15,0x2C,0x54,0x98,0x00,0x41,0x41,
	0x01,0x00,0x2D,0x86,0xC0,0x80,0xF0,0x40,0x82,0x02,0x04,0x06,0x10,0x28,0x78,0x10,
	0x00,0x00,0x89,0x26,0x33,0x30,0x28,0x48,0x60,0xA0,0x00,0x01,0x01,0x00,0x1E,0xB4,
	0x68,0x32,0xC4,0x05,0x07,0x07,0x03,0x18,0x64,0x40,0xD1,0x24,0x08,0x00,0x3B,
	'%','E','N','D'};
	
//----------------------------------------------------------------------------
//Das GIF Bild f�r den Balken
/*
PROGMEM const char bild_balken[] = 
	{
	0x47,0x49,0x46,0x38,0x39,0x61,0x02,0x00,0x0A,0x00,0xA2,0x00,0x00,0xA2,0xA5,0xED,
	0x84,0x8F,0xE5,0x66,0x7C,0xDD,0x49,0x60,0xD6,0x21,0x44,0xDA,0xFE,0x01,0x02,0x00,
	0x00,0x00,0x00,0x00,0x00,0x21,0xF9,0x04,0x05,0x14,0x00,0x05,0x00,0x2C,0x00,0x00,
	0x00,0x00,0x02,0x00,0x0A,0x00,0x00,0x03,0x0A,0x48,0x34,0x23,0x12,0x01,0x48,0x00,
	0x1D,0x53,0x09,0x00,0x3B,'%','E','N','D'};
*/

//----------------------------------------------------------------------------
//Nur Dateiname und Pointer eintragen	
WEBPAGE_ITEM WEBPAGE_TABLE[] = // Befehls-Tabelle
{
	{"index.htm",Page1},
	/*{"Status.htm",Page4},*/
	/*{"balke.gif",bild_balken},*/
	{"ledon.gif",led_on},
	{"ledoff.gif",led_off},
	{NULL,NULL} 
};

#endif //_WEBPAGE_H








