// Copyright 2019 Google LLC & Bastiaan Konings
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// written by bastiaan konings schuiling 2008 - 2015
// this work is public domain. the code is undocumented, scruffy, untested, and should generally not be used for anything important.
// i do not offer support, so don't ask. to be used for inspiration :)

#ifndef _HPP_MENU_LEAGUE_SYSTEM
#define _HPP_MENU_LEAGUE_SYSTEM

#include "../../utils/gui2/windowmanager.hpp"

#include "../../utils/gui2/page.hpp"
#include "../../utils/gui2/widgets/root.hpp"
#include "../../utils/gui2/widgets/image.hpp"
#include "../../utils/gui2/widgets/button.hpp"
#include "../../utils/gui2/widgets/slider.hpp"
#include "../../utils/gui2/widgets/grid.hpp"
#include "../../utils/gui2/widgets/caption.hpp"
#include "../../utils/gui2/widgets/capturekey.hpp"

using namespace blunted;

class LeagueSystemPage : public Gui2Page {

  public:
    LeagueSystemPage(Gui2WindowManager *windowManager, const Gui2PageData &pageData);
    virtual ~LeagueSystemPage();

  protected:

};

class LeagueSystemSavePage : public Gui2Page {

  public:
    LeagueSystemSavePage(Gui2WindowManager *windowManager, const Gui2PageData &pageData);
    virtual ~LeagueSystemSavePage();

  protected:

};

class LeagueSystemSettingsPage : public Gui2Page {

  public:
    LeagueSystemSettingsPage(Gui2WindowManager *windowManager, const Gui2PageData &pageData);
    virtual ~LeagueSystemSettingsPage();

  protected:

};

#endif
