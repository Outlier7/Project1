// //
// //  UIPlayerOption.cc
// //
// //  Created by Parsa Alipour on 2015-07-15.
// //  Copyright (c) 2015 Parsa Alipour. All rights reserved.
// //

#include <gtkmm.h>
#include "UIPlayerOption.h"

UIPlayerOption::UIPlayerOption() : pointsLbl("Points: 0"), discardsLbl("Discards: 0"), togglePlayerBtn("Human") {
	set_border_width(5);
	set_spacing(7);
	add(togglePlayerBtn);
	add(pointsLbl);
	add(discardsLbl);
}

void UIPlayerOption::update(){

}

UIPlayerOption::~UIPlayerOption() {}

