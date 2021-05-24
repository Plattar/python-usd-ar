//
// Copyright 2016 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "Apache License")
// with the following modification; you may not use this file except in
// compliance with the Apache License and the following modification to it:
// Section 6. Trademarks. is deleted and replaced with:
//
// 6. Trademarks. This License does not grant permission to use the trade
//    names, trademarks, service marks, or product names of the Licensor
//    and its affiliates, except as required to comply with Section 4(c) of
//    the License and to reproduce the content of the NOTICE file.
//
// You may obtain a copy of the Apache License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the Apache License with the above modification is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied. See the Apache License for the specific
// language governing permissions and limitations under the Apache License.
//
// GENERATED FILE.  DO NOT EDIT.
#include <boost/python/class.hpp>
#include "pxr/usd/usdInteractive/tokens.h"

PXR_NAMESPACE_USING_DIRECTIVE

namespace {

// Helper to return a static token as a string.  We wrap tokens as Python
// strings and for some reason simply wrapping the token using def_readonly
// bypasses to-Python conversion, leading to the error that there's no
// Python type for the C++ TfToken type.  So we wrap this functor instead.
class _WrapStaticToken {
public:
    _WrapStaticToken(const TfToken* token) : _token(token) { }

    std::string operator()() const
    {
        return _token->GetString();
    }

private:
    const TfToken* _token;
};

template <typename T>
void
_AddToken(T& cls, const char* name, const TfToken& token)
{
    cls.add_static_property(name,
                            boost::python::make_function(
                                _WrapStaticToken(&token),
                                boost::python::return_value_policy<
                                    boost::python::return_by_value>(),
                                boost::mpl::vector1<std::string>()));
}

} // anonymous

void wrapUsdInteractiveTokens()
{
    boost::python::class_<UsdInteractiveTokensType, boost::noncopyable>
        cls("Tokens", boost::python::no_init);
    _AddToken(cls, "actions", UsdInteractiveTokens->actions);
    _AddToken(cls, "allow", UsdInteractiveTokens->allow);
    _AddToken(cls, "any", UsdInteractiveTokens->any);
    _AddToken(cls, "baseline", UsdInteractiveTokens->baseline);
    _AddToken(cls, "bottom", UsdInteractiveTokens->bottom);
    _AddToken(cls, "center", UsdInteractiveTokens->center);
    _AddToken(cls, "content", UsdInteractiveTokens->content);
    _AddToken(cls, "depth", UsdInteractiveTokens->depth);
    _AddToken(cls, "exclusive", UsdInteractiveTokens->exclusive);
    _AddToken(cls, "face", UsdInteractiveTokens->face);
    _AddToken(cls, "flowing", UsdInteractiveTokens->flowing);
    _AddToken(cls, "font", UsdInteractiveTokens->font);
    _AddToken(cls, "hardBreaks", UsdInteractiveTokens->hardBreaks);
    _AddToken(cls, "height", UsdInteractiveTokens->height);
    _AddToken(cls, "horizontal", UsdInteractiveTokens->horizontal);
    _AddToken(cls, "horizontalAlignment", UsdInteractiveTokens->horizontalAlignment);
    _AddToken(cls, "ignore", UsdInteractiveTokens->ignore);
    _AddToken(cls, "image", UsdInteractiveTokens->image);
    _AddToken(cls, "infoId", UsdInteractiveTokens->infoId);
    _AddToken(cls, "justified", UsdInteractiveTokens->justified);
    _AddToken(cls, "left", UsdInteractiveTokens->left);
    _AddToken(cls, "lowerMiddle", UsdInteractiveTokens->lowerMiddle);
    _AddToken(cls, "middle", UsdInteractiveTokens->middle);
    _AddToken(cls, "multiplePerformOperation", UsdInteractiveTokens->multiplePerformOperation);
    _AddToken(cls, "none", UsdInteractiveTokens->none);
    _AddToken(cls, "physicalWidth", UsdInteractiveTokens->physicalWidth);
    _AddToken(cls, "plane", UsdInteractiveTokens->plane);
    _AddToken(cls, "pointSize", UsdInteractiveTokens->pointSize);
    _AddToken(cls, "preliminaryAnchoringType", UsdInteractiveTokens->preliminaryAnchoringType);
    _AddToken(cls, "preliminaryImageAnchoringReferenceImage", UsdInteractiveTokens->preliminaryImageAnchoringReferenceImage);
    _AddToken(cls, "preliminaryPlaneAnchoringAlignment", UsdInteractiveTokens->preliminaryPlaneAnchoringAlignment);
    _AddToken(cls, "right", UsdInteractiveTokens->right);
    _AddToken(cls, "singleLine", UsdInteractiveTokens->singleLine);
    _AddToken(cls, "stop", UsdInteractiveTokens->stop);
    _AddToken(cls, "top", UsdInteractiveTokens->top);
    _AddToken(cls, "triggers", UsdInteractiveTokens->triggers);
    _AddToken(cls, "vertical", UsdInteractiveTokens->vertical);
    _AddToken(cls, "verticalAlignment", UsdInteractiveTokens->verticalAlignment);
    _AddToken(cls, "width", UsdInteractiveTokens->width);
    _AddToken(cls, "wrapMode", UsdInteractiveTokens->wrapMode);
}
