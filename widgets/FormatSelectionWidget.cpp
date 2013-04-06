/****************************************************************************
 ** Makou Reactor Final Fantasy VII Field Script Editor
 ** Copyright (C) 2009-2012 Arzel J�r�me <myst6re@gmail.com>
 **
 ** This program is free software: you can redistribute it and/or modify
 ** it under the terms of the GNU General Public License as published by
 ** the Free Software Foundation, either version 3 of the License, or
 ** (at your option) any later version.
 **
 ** This program is distributed in the hope that it will be useful,
 ** but WITHOUT ANY WARRANTY; without even the implied warranty of
 ** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 ** GNU General Public License for more details.
 **
 ** You should have received a copy of the GNU General Public License
 ** along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ****************************************************************************/
#include "FormatSelectionWidget.h"

FormatSelectionWidget::FormatSelectionWidget(const QString &text, const QStringList &formats, QWidget *parent) :
	QGroupBox(text, parent)
{
	setCheckable(true);
	setChecked(true);

	format = new QComboBox(this);
	format->addItems(formats);
	format->setEnabled(formats.size() > 1);

	QVBoxLayout *layout = new QVBoxLayout(this);
	layout->addWidget(format);
}

int FormatSelectionWidget::currentFormat() const
{
	return format->currentIndex();
}

void FormatSelectionWidget::setCurrentFormat(int index)
{
	format->setCurrentIndex(index);
}