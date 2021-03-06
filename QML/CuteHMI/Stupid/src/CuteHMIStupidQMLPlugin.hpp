#ifndef H_QML_CUTEHMI_STUPID_SRC_CUTEHMISTUPIDQMLPLUGIN_HPP
#define H_QML_CUTEHMI_STUPID_SRC_CUTEHMISTUPIDQMLPLUGIN_HPP

#include <QQmlExtensionPlugin>

class CuteHMIStupidQMLPlugin:
	public QQmlExtensionPlugin
{
	Q_OBJECT
	Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionInterface")

	public:
		void registerTypes(const char * uri) override;
};

#endif

//(c)MP: Copyright © 2016, Michal Policht. All rights reserved.
//(c)MP: This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with this file, You can obtain one at http://mozilla.org/MPL/2.0/.
