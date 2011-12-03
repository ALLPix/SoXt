/**************************************************************************\
 * Copyright (c) Kongsberg Oil & Gas Technologies AS
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 * 
 * Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 * 
 * Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 * 
 * Neither the name of the copyright holder nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
\**************************************************************************/

#if SOXT_DEBUG
static const char rcsid[] =
  "$Id$";
#endif // SOXT_DEBUG

#include <Inventor/errors/SoDebugError.h>
#include <Inventor/nodes/SoDirectionalLight.h>

#include <soxtdefs.h>

#include <Inventor/Xt/SoXtDirectionalLightEditor.h>

// *************************************************************************

/*!
  \class SoXtDirectionalLightEditor Inventor/Xt/SoXtDirectionalLightEditor.h
  \brief The SoXtDirectionalLightEditor class is yet to be documented.
  \ingroup components editors

  This class is not implemented.
*/

// *************************************************************************

SOXT_OBJECT_SOURCE(SoXtDirectionalLightEditor);

// *************************************************************************

/*!
  \var SoDirectionalLight * SoXtDirectionalLightEditor::dirLight
  FIXME: write doc
*/
/*!
  \var SoSeparator * SoXtDirectionalLightEditor::root
  FIXME: write doc
*/
/*!
  \var SoSeparator * SoXtDirectionalLightEditor::litStuff
  FIXME: write doc
*/
/*!
  \var SoPerspectiveCamera * SoXtDirectionalLightEditor::myCamera
  FIXME: write doc
*/
/*!
  \var SoCamera * SoXtDirectionalLightEditor::cameraToWatch
  FIXME: write doc
*/
/*!
  \var _SoXtColorEditor * SoXtDirectionalLightEditor::colorEditor
  FIXME: write doc
*/
/*!
  \var _SoXtColorSlider * SoXtDirectionalLightEditor::intensitySlider
  FIXME: write doc
*/
/*!
  \var SoXtRenderArea * SoXtDirectionalLightEditor::renderArea
  FIXME: write doc
*/
/*!
  \var SoNodeSensor * SoXtDirectionalLightEditor::lightSensor
  FIXME: write doc
*/
/*!
  \var SoNodeSensor * SoXtDirectionalLightEditor::cameraSensor
  FIXME: write doc
*/
/*!
  \var SoDirectionalLightManip * SoXtDirectionalLightEditor::dirLightManip
  FIXME: write doc
*/
/*!
  \var static char * SoXtDirectionalLightEditor::geomBuffer
  FIXME: write doc
*/
/*!
  \var SbBool SoXtDirectionalLightEditor::ignoreCallback
  FIXME: write doc
*/
/*!
  \var SoCallbackList * SoXtDirectionalLightEditor::callbackList
  FIXME: write doc
*/
/*!
  \var SoXtClipboard * SoXtDirectionalLightEditor::clipboard
  FIXME: write doc
*/

// *************************************************************************

/*!
  Constructor.
*/

SoXtDirectionalLightEditor::SoXtDirectionalLightEditor(
  Widget parent,
  const char * const name,
  SbBool embed)
: inherited(parent, name, embed)
{
  SOXT_STUB();
  this->constructor(TRUE);
} // SoXtDirectionalLightEditor()

/*!
  Constructor.
*/

SoXtDirectionalLightEditor::SoXtDirectionalLightEditor(// protected
  Widget parent,
  const char * const name,
  SbBool embed,
  SbBool build)
: inherited(parent, name, embed)
{
  SOXT_STUB();
  this->constructor(build);
} // SoXtDirectionalLightEditor()

/*!
  Destructor.
*/

SoXtDirectionalLightEditor::~SoXtDirectionalLightEditor(
  void)
{
  SOXT_STUB();
} // ~SoXtDirectionalLightEditor()

// *************************************************************************

/*!
  FIXME: write doc
*/

void
SoXtDirectionalLightEditor::attach(
  SoPath * pathToLight)
{
  SOXT_STUB();
} // attach()

/*!
  FIXME: write doc
*/

void
SoXtDirectionalLightEditor::detach(
  void)
{
  SOXT_STUB();
} // detach()

/*!
  FIXME: write doc
*/

SbBool
SoXtDirectionalLightEditor::isAttached(
  void)
{
  SOXT_STUB();
  return FALSE;
} // isAttached()

/*!
  FIXME: write doc
*/

void
SoXtDirectionalLightEditor::setLight(
  const SoDirectionalLight & light)
{
  SOXT_STUB();
} // setLight()

/*!
  FIXME: write doc
*/

const SoDirectionalLight &
SoXtDirectionalLightEditor::getLight(
  void) const
{
  SOXT_STUB();
  return *((SoDirectionalLight *) SoDirectionalLight::getClassTypeId().createInstance());
} // getLight()

/*!
  FIXME: write doc
*/

void
SoXtDirectionalLightEditor::addLightChangedCallback(
  SoXtDirectionalLightEditorCB * callback,
  void * user)
{
  SOXT_STUB();
} // addLightChangedCallback()

/*!
  FIXME: write doc
*/

void
SoXtDirectionalLightEditor::removeLightChangedCallback(
  SoXtDirectionalLightEditorCB * callback,
  void * user)
{
  SOXT_STUB();
} // removeLightChangedCallback()

/*!
  FIXME: write doc
*/

void
SoXtDirectionalLightEditor::show(// virtual
  void)
{
  SOXT_STUB();
} // show()

/*!
  FIXME: write doc
*/

void
SoXtDirectionalLightEditor::hide(// virtual
  void)
{
  SOXT_STUB();
} // hide()

// *************************************************************************

/*!
  FIXME: write doc
*/

const char *
SoXtDirectionalLightEditor::getDefaultWidgetName(// virtual, protected
  void) const
{
  static const char defaultWidgetName[] = "SoXtDirectionalLightEditor";
  return defaultWidgetName;
} // getDefaultWidgetName()

/*!
  FIXME: write doc
*/

const char *
SoXtDirectionalLightEditor::getDefaultTitle(// virtual, protected
  void) const
{
  static const char defaultTitle[] = "Directional Light";
  return defaultTitle;
} // getDefaultTitle()

/*!
  FIXME: write doc
*/

const char *
SoXtDirectionalLightEditor::getDefaultIconTitle(// virtual, protected
  void) const
{
  static const char defaultIconTitle[] = "Directional Light";
  return defaultIconTitle;
} // getDefaultIconTitle()

/*!
  FIXME: write doc
*/

void
SoXtDirectionalLightEditor::copyLight(// protected
  SoDirectionalLight * destination,
  const SoDirectionalLight * source)
{
  SOXT_STUB();
} // copyLight()

/*!
  FIXME: write doc
*/

void
SoXtDirectionalLightEditor::updateLocalComponents(// protected
  void)
{
  SOXT_STUB();
} // updateLocalComponents()

// *************************************************************************

/*!
  FIXME: write doc
*/

// this method will be moved to protected - no point otherwise...

Widget
SoXtDirectionalLightEditor::buildWidget(// private
  Widget parent)
{
  SOXT_STUB();
  return (Widget) NULL;
} // buildWidget()

/*!
  FIXME: write doc
*/

void
SoXtDirectionalLightEditor::constructor(// private
  SbBool build)
{
  SOXT_STUB();
} // constructor()

// *************************************************************************

#if SOXT_DEBUG
static const char * getSoXtDirectionalLightEditorRCSId(void) { return rcsid; }
#endif // SOXT_DEBUG

