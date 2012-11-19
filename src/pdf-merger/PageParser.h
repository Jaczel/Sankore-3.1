/*
 * Copyright (C) 2012 Webdoc SA
 *
 * This file is part of Open-Sankoré.
 *
 * Open-Sankoré is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation, version 2,
 * with a specific linking exception for the OpenSSL project's
 * "OpenSSL" library (or with modified versions of it that use the
 * same license as the "OpenSSL" library).
 *
 * Open-Sankoré is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with Open-Sankoré; if not, see
 * <http://www.gnu.org/licenses/>.
 */


#if !defined(EA_FF53E894_11D7_4c64_A409_DBC97C9EF3CF__INCLUDED_)
#define EA_FF53E894_11D7_4c64_A409_DBC97C9EF3CF__INCLUDED_

#include "Object.h"

#include <string>

class PageParser
{
friend class Parser;

public:
   PageParser(const std::string & pageContent);
   ~PageParser();
   unsigned int getPageNumber()
   {
      return _pageNumber;
   }
   void merge(const Page & sourcePage);

   void recalculateObjectNumbers(unsigned int & newNumber);
   std::string & getPageContent();
   const std::map <unsigned int, Object *> &  getPageRefs();

private:
   //methods


   //members
   Object * _root;
   unsigned int _pageNumber;

};
#endif // !defined(EA_FF53E894_11D7_4c64_A409_DBC97C9EF3CF__INCLUDED_)

