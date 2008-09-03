//
// ComboBoxCellRenderer.h
//
// $Id: //poco/Main/WebWidgets/ExtJS/include/Poco/WebWidgets/ExtJS/ComboBoxCellRenderer.h#2 $
//
// Library: ExtJS
// Package: Core
// Module:  ComboBoxCellRenderer
//
// Definition of the ComboBoxCellRenderer class.
//
// Copyright (c) 2007, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
// 
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//


#ifndef ExtJS_ComboBoxCellRenderer_INCLUDED
#define ExtJS_ComboBoxCellRenderer_INCLUDED


#include "Poco/WebWidgets/ExtJS/ExtJS.h"
#include "Poco/WebWidgets/Renderer.h"
#include "Poco/WebWidgets/JSDelegate.h"
#include "Poco/Net/HTTPServerResponse.h"


namespace Poco {
namespace WebWidgets {

	class ComboBoxCell;
	class ComboBox;
	
namespace ExtJS {


class ExtJS_API ComboBoxCellRenderer: public Poco::WebWidgets::Renderer
	/// ComboBoxCellRenderer renders a ComboBox
{
public:
	static const std::string EV_SELECTED;
	static const std::string EV_AFTERLOAD;
	
	ComboBoxCellRenderer();
		/// Creates the ComboBoxCellRenderer.

	virtual ~ComboBoxCellRenderer();
		/// Destroys the ComboBoxCellRenderer.

	void renderHead(const Renderable* pRenderable, const RenderContext& context, std::ostream& ostr);
		/// Emits code for the page header to the given output stream.

	void renderBody(const Renderable* pRenderable, const RenderContext& context, std::ostream& ostr);
		/// Emits code for the page body to the given output stream.
	
private:
	static void onLoad(void* pSender, Poco::Net::HTTPServerResponse* &pResponse);
	
	static void serialize(const ComboBoxCell* pCell, std::ostream& out);
	
	static Poco::WebWidgets::JSDelegate createSelectedServerCallback(const ComboBox* pCombo);
		/// Adds a server callback for the selected event. The method signature for select is
		/// select : ( Ext.form.ComboBox combo, Ext.data.Record record, Number index )
		
	static Poco::WebWidgets::JSDelegate createAfterLoadServerCallback(const ComboBox* pCombo);
		/// Create a server callback for afterLoad of ComboBox list 
};


} } } // namespace Poco::WebWidgets::ExtJS


#endif // ExtJS_ComboBoxCellRenderer_INCLUDED
