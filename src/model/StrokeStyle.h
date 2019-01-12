/*
 * Xournal++
 *
 * Definition for StrokeStyles
 *
 * @author Xournal++ Team
 * https://github.com/xournalpp/xournalpp
 *
 * @license GNU GPLv2 or later
 */

#pragma once

#include <XournalType.h>

#include "model/LineStyle.h"

class Stroke;

class StrokeStyle
{
private:
	StrokeStyle();
	virtual ~StrokeStyle();

public:
	static LineStyle parseStyle(const char* style);
	static string formatStyle(const double* dashes, int count);
	static string formatStyle(const LineStyle& style);

public:
};

