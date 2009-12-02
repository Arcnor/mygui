/*!
	@file
	@author		Albert Semenov
	@date		11/2009
	@module
*/

#ifndef __CONTROLLER_RANDOM_SELECTED_H__
#define __CONTROLLER_RANDOM_SELECTED_H__

#include "MyGUI_Prerequest.h"
#include "MyGUI_WidgetDefines.h"
#include "MyGUI_ControllerItem.h"

namespace demo
{

	class ControllerRandomSelected :
		public MyGUI::ControllerItem
	{
		MYGUI_RTTI_DERIVED( ControllerRandomSelected );

	public:
		ControllerRandomSelected() { }
		virtual ~ControllerRandomSelected() { }

	private:
		bool addTime(MyGUI::WidgetPtr _widget, float _time)
		{
			mTime += _time;
			if (mTime > 1)
			{
				mTime -= 1;
				action(_widget);
			}

			return true;
		}

		void prepareItem(MyGUI::WidgetPtr _widget)
		{
			mTime = 0;
			action(_widget);
		}

		void action(MyGUI::WidgetPtr _widget)
		{
			if ((::rand() % 3) == 0)
			{
				MyGUI::Button* button = _widget->castType<MyGUI::Button>(false);
				if (button != nullptr)
					button->setButtonPressed(!button->getButtonPressed());
			}
		}

	private:
		float mTime;

	};

}

#endif // __CONTROLLER_RANDOM_SELECTED_H__
