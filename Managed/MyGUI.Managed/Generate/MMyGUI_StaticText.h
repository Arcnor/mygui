﻿/*!
	@file
	@author		Generate utility by Albert Semenov
	@date		01/2009
	@module
*/
#pragma once

#include "MMyGUI_Widget.h"


MMYGUI_BEGIN_NAMESPACE

public ref class StaticText : public Widget
{

	//--------------------------------------------------------------------
	// объявление типов и конструкторов
	MMYGUI_DECLARE_DERIVED( StaticText, StaticText, Widget );

	

	//InsertPoint

   	public:
		property Convert<const MyGUI::Colour &>::Type TextColour
		{
			Convert<const MyGUI::Colour &>::Type get( )
			{
				MMYGUI_CHECK_NATIVE(mNative);
				return Convert<const MyGUI::Colour &>::To( static_cast<ThisType*>(mNative)->getTextColour() );
			}
			void set(Convert<const MyGUI::Colour &>::Type _value)
			{
				MMYGUI_CHECK_NATIVE(mNative);
				static_cast<ThisType*>(mNative)->setTextColour( Convert<const MyGUI::Colour &>::From(_value) );
			}
		}



   	public:
		property Convert< MyGUI::Align >::Type TextAlign
		{
			Convert< MyGUI::Align >::Type get( )
			{
				MMYGUI_CHECK_NATIVE(mNative);
				return Convert< MyGUI::Align >::To( static_cast<ThisType*>(mNative)->getTextAlign() );
			}
			void set(Convert< MyGUI::Align >::Type _value)
			{
				MMYGUI_CHECK_NATIVE(mNative);
				static_cast<ThisType*>(mNative)->setTextAlign( Convert< MyGUI::Align >::From(_value) );
			}
		}



   	public:
		property Convert< unsigned int >::Type FontHeight
		{
			Convert< unsigned int >::Type get( )
			{
				MMYGUI_CHECK_NATIVE(mNative);
				return Convert< unsigned int >::To( static_cast<ThisType*>(mNative)->getFontHeight() );
			}
			void set(Convert< unsigned int >::Type _value)
			{
				MMYGUI_CHECK_NATIVE(mNative);
				static_cast<ThisType*>(mNative)->setFontHeight( Convert< unsigned int >::From(_value) );
			}
		}



   	public:
		property Convert<const std::string &>::Type FontName
		{
			Convert<const std::string &>::Type get( )
			{
				MMYGUI_CHECK_NATIVE(mNative);
				return Convert<const std::string &>::To( static_cast<ThisType*>(mNative)->getFontName() );
			}
			void set(Convert<const std::string &>::Type _value)
			{
				MMYGUI_CHECK_NATIVE(mNative);
				static_cast<ThisType*>(mNative)->setFontName( Convert<const std::string &>::From(_value) );
			}
		}



   	public:
		Convert< MyGUI::types::TSize< int > >::Type GetTextSize( )
		{
			MMYGUI_CHECK_NATIVE(mNative);
			return Convert< MyGUI::types::TSize< int > >::To( static_cast<ThisType*>(mNative)->getTextSize( ) );
		}



   	public:
		Convert< MyGUI::types::TCoord< int > >::Type GetTextRegion( )
		{
			MMYGUI_CHECK_NATIVE(mNative);
			return Convert< MyGUI::types::TCoord< int > >::To( static_cast<ThisType*>(mNative)->getTextRegion( ) );
		}



};

MMYGUI_END_NAMESPACE
