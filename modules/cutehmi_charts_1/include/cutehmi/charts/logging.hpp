#ifndef H_MODULES_CUTEHMI__CHARTS__1_INCLUDE_CUTEHMI_CHARTS_LOGGING_HPP
#define H_MODULES_CUTEHMI__CHARTS__1_INCLUDE_CUTEHMI_CHARTS_LOGGING_HPP

#include <cutehmi/loggingMacros.hpp>

Q_DECLARE_LOGGING_CATEGORY(cutehmi_charts_1_loggingCategory)

namespace cutehmi {
namespace charts {

inline
const QLoggingCategory & loggingCategory()
{
	return cutehmi_charts_1_loggingCategory();
}

}
}

#endif

//(c)MP: Copyright © 2017, Michal Policht. All rights reserved.
//(c)MP: This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with this file, You can obtain one at http://mozilla.org/MPL/2.0/.
