#include "SystemColor.h"
#include "Config.h"

#ifndef Q_OS_MAC

#define systemColor(dark, light) \
	bool darkTheme = Config::value("dark_theme", false).toBool(); \
	return darkTheme ? dark : light;

QColor SystemColor::red()
{
	systemColor(qRgb(0xF0, 0x90, 0x90), qRgb(0xb0, 0x18, 0x18))
}

QColor SystemColor::blue()
{
	systemColor(qRgb(0x5E, 0xAF, 0xFF), qRgb(0x00, 0x57, 0xAF))
}

QColor SystemColor::green()
{
	systemColor(qRgb(0x00, 0xc6, 0x00), qRgb(0x00, 0x68, 0x00))
}

QColor SystemColor::orange()
{
	systemColor(qRgb(0xFF, 0x8D, 0x1A), qRgb(0x8C, 0x46, 0x00))
}

QColor SystemColor::purple()
{
	systemColor(qRgb(0xC9, 0x92, 0xFF), qRgb(0x66, 0x00, 0xCC))
}

QColor SystemColor::grey()
{
	systemColor(qRgb(0xCC, 0xCC, 0xCC), qRgb(0x59, 0x59, 0x59))
}

#endif