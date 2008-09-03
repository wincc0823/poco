//
// NumberField.h
//
// $Id: //poco/Main/WebWidgets/include/Poco/WebWidgets/NumberField.h#3 $
//
// Library: WebWidgets
// Package: Controls
// Module:  NumberField
//
// Definition of the NumberField class.
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


#ifndef WebWidgets_NumberField_INCLUDED
#define WebWidgets_NumberField_INCLUDED


#include "Poco/WebWidgets/TextField.h"
#include "Poco/WebWidgets/IntFormatter.h"


namespace Poco {
namespace WebWidgets {


class WebWidgets_API NumberField: public TextField
	/// A NumberField containing only numbers
{
public:
	typedef Poco::AutoPtr<NumberField> Ptr;

	NumberField();
		/// Creates an anonymous NumberField.

	NumberField(const std::string& name, Formatter::Ptr pF = new IntFormatter());
		/// Creates a named NumberField.

protected:
	NumberField(const std::string& name, const std::type_info& type);
		/// Creates a NumberField and assigns it the given name.

	NumberField(const std::type_info& type);
		/// Creates a NumberField.

	~NumberField();
		/// Destroys the NumberField.
};


} } // namespace Poco::WebWidgets


#endif // WebWidgets_NumberField_INCLUDED
