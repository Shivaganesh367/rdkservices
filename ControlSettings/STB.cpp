/*
* If not stated otherwise in this file or this component's LICENSE file the
* following copyright and licenses apply:
*
* Copyright 2022 Sky UK
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include <string>
#include "STB.h"

namespace WPEFramework {
namespace Plugin {

    STB::STB()
    {
        LOGINFO(); 
    }
    
    STB :: ~STB()
    {
        LOGINFO();
    }

    void STB::Initialize()
    {
        LOGINFO();
        //Platform specific Init Sequence
    }

    void STB::DeInitialize()
    {
        LOGINFO();
    }

    void STB::getVolume()
    {
        LOGINFO("Derived Entry : %s\n",__FUNCTION__);
        LOGINFO("Derived Exit  : %s\n",__FUNCTION__);
    }

    void STB::setVolume()
    {
        LOGINFO("Derived Entry : %s\n",__FUNCTION__);
        LOGINFO("Derived Exit  : %s\n",__FUNCTION__);
    }



}//namespace Plugin
}//namespace WPEFramework
