/**************************************************************************
 *
 *  This file is part of the Coin SoQt GUI binding library.
 *  Copyright (C) 1998-2000 by Systems in Motion.  All rights reserved.
 *
 *  This library is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License version
 *  2.1 as published by the Free Software Foundation.  See the file
 *  LICENSE.LGPL at the root directory of the distribution for all the
 *  details.
 *
 *  If you want to use Coin SoQt for applications not compatible with the
 *  LGPL, please contact SIM to acquire a Professional Edition License.
 *
 *  Systems in Motion, Prof Brochs gate 6, N-7030 Trondheim, NORWAY
 *  http://www.sim.no/ support@sim.no Voice: +47 22114160 Fax: +47 22207097
 *
 **************************************************************************/

/*!
  \internal
  Set cursor graphics according to mode.
*/
void
SoXtFlyViewerP::updateCursorRepresentation()
{
  // FIXME: implement!!! 20011024 mortene.

//    QWidget * w = this->viewer->getRenderAreaWidget();
//    assert(w);

//    if (!this->viewer->isCursorEnabled()) {
//      w->setCursor(Qt::blankCursor);
//      return;
//    }

//    switch (this->viewermode) {
//    case SoQtFlyViewerP::FLYING:
//      w->setCursor(Qt::arrowCursor);
//      break;

//    case SoQtFlyViewerP::WAITING_FOR_SEEK:
//      w->setCursor(Qt::crossCursor);
//      break;

//    case SoQtFlyViewerP::WAITING_FOR_UP_PICK:
//      w->setCursor(Qt::upArrowCursor);
//      break;

//    default:
//      // FIXME: enable again when implementation completed. 20010910 mortene.
//  //      assert(0);
//      SOQT_STUB();
//      break;
//    }
} // setCursorRepresentation()


// FIXME: this code is "left over" after we migrated to a common
// code-base in SoGuiFlyViewer.cpp.in. Fix up and re-enable. 20011209 mortene.

//  void
//  SoXtFlyViewer::createPrefSheet(// virtual, protected
//    void)
//  {
//    if (! this->prefshell) {
//      this->prefparts = new Widget [ 16 ];
//      this->createPrefSheetShellAndForm(this->prefshell, this->prefsheet);
//      this->createDefaultPrefSheetParts(this->prefparts, this->numprefparts,
//        this->prefsheet);
//      this->prefparts[this->numprefparts] =
//        this->createFramedSpeedPrefSheetGuts(this->prefsheet);
//      if (this->prefparts[this->numprefparts] != NULL) this->numprefparts++;
//    }
//    this->layoutPartsAndMapPrefSheet(this->prefparts, this->numprefparts,
//      this->prefsheet, this->prefshell);
//  } // createPrefSheet()
