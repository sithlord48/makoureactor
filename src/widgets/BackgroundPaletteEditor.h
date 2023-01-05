#pragma once

#include <QtWidgets>
#include "Listwidget.h"
#include "ImageGridWidget.h"

class BackgroundFile;
class Palette;

class BackgroundPaletteEditor : public QWidget
{
	Q_OBJECT
public:
	explicit BackgroundPaletteEditor(QWidget *parent = nullptr);
	void setBackgroundFile(BackgroundFile *backgroundFile);
	void clear();
private slots:
	void setCurrentPalette(int palID);
	void choosePixelColor(const Cell &cell);
	void setTransparencyFlag();
signals:
	void modified();

private:
	Palette *currentPalette();

	ListWidget *_listWidget;
	QCheckBox *_transparency;
	ImageGridWidget *_imageGrid;

	BackgroundFile *_backgroundFile;
};
