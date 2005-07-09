/*
 * This file is a part of QComicBook.
 *
 * Copyright (C) 2005 Pawel Stolowski <yogin@linux.bydg.org>
 *
 * QComicBook is free software; you can redestribute it and/or modify it
 * under terms of GNU General Public License by Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY. See GPL for more details.
 */

#ifndef __IMGSINKFACTORY_H
#define __IMGSINKFACTORY_H

/*! \file imgsinkfactory.h */

enum SinkType
{
	ArchiveSink = 1,
	DirSink
};

class ImgSink;
class QString;

class ImgSinkFactory
{
	private:
		ImgSinkFactory();
		~ImgSinkFactory();

	public:
		static ImgSinkFactory& instance();
		ImgSink* createImgSink(SinkType s);
		ImgSink* createImgSink(const QString &path);
};

#endif
