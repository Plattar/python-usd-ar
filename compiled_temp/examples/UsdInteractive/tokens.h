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
#ifndef USDINTERACTIVE_TOKENS_H
#define USDINTERACTIVE_TOKENS_H

/// \file usdInteractive/tokens.h

// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// 
// This is an automatically generated file (by usdGenSchema.py).
// Do not hand-edit!
// 
// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

#include "pxr/pxr.h"
#include "pxr/usd/usdInteractive/api.h"
#include "pxr/base/tf/staticData.h"
#include "pxr/base/tf/token.h"
#include <vector>

PXR_NAMESPACE_OPEN_SCOPE


/// \class UsdInteractiveTokensType
///
/// \link UsdInteractiveTokens \endlink provides static, efficient
/// \link TfToken TfTokens\endlink for use in all public USD API.
///
/// These tokens are auto-generated from the module's schema, representing
/// property names, for when you need to fetch an attribute or relationship
/// directly by name, e.g. UsdPrim::GetAttribute(), in the most efficient
/// manner, and allow the compiler to verify that you spelled the name
/// correctly.
///
/// UsdInteractiveTokens also contains all of the \em allowedTokens values
/// declared for schema builtin attributes of 'token' scene description type.
/// Use UsdInteractiveTokens like so:
///
/// \code
///     gprim.GetMyTokenValuedAttr().Set(UsdInteractiveTokens->actions);
/// \endcode
struct UsdInteractiveTokensType {
    USDINTERACTIVE_API UsdInteractiveTokensType();
    /// \brief "actions"
    /// 
    /// UsdInteractivePreliminary_Behavior
    const TfToken actions;
    /// \brief "allow"
    /// 
    /// Possible value for UsdInteractivePreliminary_Action::GetMultiplePerformOperationAttr()
    const TfToken allow;
    /// \brief "any"
    /// 
    /// Possible value for UsdInteractivePreliminary_AnchoringAPI::GetPreliminaryPlaneAnchoringAlignmentAttr()
    const TfToken any;
    /// \brief "baseline"
    /// 
    /// Possible value for UsdInteractivePreliminary_Text::GetVerticalAlignmentAttr()
    const TfToken baseline;
    /// \brief "bottom"
    /// 
    /// Possible value for UsdInteractivePreliminary_Text::GetVerticalAlignmentAttr()
    const TfToken bottom;
    /// \brief "center"
    /// 
    /// Possible value for UsdInteractivePreliminary_Text::GetHorizontalAlignmentAttr(), Default value for UsdInteractivePreliminary_Text::GetHorizontalAlignmentAttr()
    const TfToken center;
    /// \brief "content"
    /// 
    /// UsdInteractivePreliminary_Text
    const TfToken content;
    /// \brief "depth"
    /// 
    /// UsdInteractivePreliminary_Text
    const TfToken depth;
    /// \brief "exclusive"
    /// 
    /// UsdInteractivePreliminary_Behavior
    const TfToken exclusive;
    /// \brief "face"
    /// 
    /// Possible value for UsdInteractivePreliminary_AnchoringAPI::GetPreliminaryAnchoringTypeAttr()
    const TfToken face;
    /// \brief "flowing"
    /// 
    /// Possible value for UsdInteractivePreliminary_Text::GetWrapModeAttr(), Default value for UsdInteractivePreliminary_Text::GetWrapModeAttr()
    const TfToken flowing;
    /// \brief "font"
    /// 
    /// UsdInteractivePreliminary_Text
    const TfToken font;
    /// \brief "hardBreaks"
    /// 
    /// Possible value for UsdInteractivePreliminary_Text::GetWrapModeAttr()
    const TfToken hardBreaks;
    /// \brief "height"
    /// 
    /// UsdInteractivePreliminary_Text
    const TfToken height;
    /// \brief "horizontal"
    /// 
    /// Possible value for UsdInteractivePreliminary_AnchoringAPI::GetPreliminaryPlaneAnchoringAlignmentAttr()
    const TfToken horizontal;
    /// \brief "horizontalAlignment"
    /// 
    /// UsdInteractivePreliminary_Text
    const TfToken horizontalAlignment;
    /// \brief "ignore"
    /// 
    /// Possible value for UsdInteractivePreliminary_Action::GetMultiplePerformOperationAttr(), Default value for UsdInteractivePreliminary_Action::GetMultiplePerformOperationAttr()
    const TfToken ignore;
    /// \brief "image"
    /// 
    /// UsdInteractivePreliminary_ReferenceImage, Possible value for UsdInteractivePreliminary_AnchoringAPI::GetPreliminaryAnchoringTypeAttr()
    const TfToken image;
    /// \brief "info:id"
    /// 
    /// UsdInteractivePreliminary_Action, UsdInteractivePreliminary_Trigger
    const TfToken infoId;
    /// \brief "justified"
    /// 
    /// Possible value for UsdInteractivePreliminary_Text::GetHorizontalAlignmentAttr()
    const TfToken justified;
    /// \brief "left"
    /// 
    /// Possible value for UsdInteractivePreliminary_Text::GetHorizontalAlignmentAttr()
    const TfToken left;
    /// \brief "lowerMiddle"
    /// 
    /// Possible value for UsdInteractivePreliminary_Text::GetVerticalAlignmentAttr()
    const TfToken lowerMiddle;
    /// \brief "middle"
    /// 
    /// Possible value for UsdInteractivePreliminary_Text::GetVerticalAlignmentAttr(), Default value for UsdInteractivePreliminary_Text::GetVerticalAlignmentAttr()
    const TfToken middle;
    /// \brief "multiplePerformOperation"
    /// 
    /// UsdInteractivePreliminary_Action
    const TfToken multiplePerformOperation;
    /// \brief "none"
    /// 
    /// Possible value for UsdInteractivePreliminary_AnchoringAPI::GetPreliminaryAnchoringTypeAttr()
    const TfToken none;
    /// \brief "physicalWidth"
    /// 
    /// UsdInteractivePreliminary_ReferenceImage
    const TfToken physicalWidth;
    /// \brief "plane"
    /// 
    /// Possible value for UsdInteractivePreliminary_AnchoringAPI::GetPreliminaryAnchoringTypeAttr()
    const TfToken plane;
    /// \brief "pointSize"
    /// 
    /// UsdInteractivePreliminary_Text
    const TfToken pointSize;
    /// \brief "preliminary:anchoring:type"
    /// 
    /// UsdInteractivePreliminary_AnchoringAPI
    const TfToken preliminaryAnchoringType;
    /// \brief "preliminary:imageAnchoring:referenceImage"
    /// 
    /// UsdInteractivePreliminary_AnchoringAPI
    const TfToken preliminaryImageAnchoringReferenceImage;
    /// \brief "preliminary:planeAnchoring:alignment"
    /// 
    /// UsdInteractivePreliminary_AnchoringAPI
    const TfToken preliminaryPlaneAnchoringAlignment;
    /// \brief "right"
    /// 
    /// Possible value for UsdInteractivePreliminary_Text::GetHorizontalAlignmentAttr()
    const TfToken right;
    /// \brief "singleLine"
    /// 
    /// Possible value for UsdInteractivePreliminary_Text::GetWrapModeAttr()
    const TfToken singleLine;
    /// \brief "stop"
    /// 
    /// Possible value for UsdInteractivePreliminary_Action::GetMultiplePerformOperationAttr()
    const TfToken stop;
    /// \brief "top"
    /// 
    /// Possible value for UsdInteractivePreliminary_Text::GetVerticalAlignmentAttr()
    const TfToken top;
    /// \brief "triggers"
    /// 
    /// UsdInteractivePreliminary_Behavior
    const TfToken triggers;
    /// \brief "vertical"
    /// 
    /// Possible value for UsdInteractivePreliminary_AnchoringAPI::GetPreliminaryPlaneAnchoringAlignmentAttr()
    const TfToken vertical;
    /// \brief "verticalAlignment"
    /// 
    /// UsdInteractivePreliminary_Text
    const TfToken verticalAlignment;
    /// \brief "width"
    /// 
    /// UsdInteractivePreliminary_Text
    const TfToken width;
    /// \brief "wrapMode"
    /// 
    /// UsdInteractivePreliminary_Text
    const TfToken wrapMode;
    /// A vector of all of the tokens listed above.
    const std::vector<TfToken> allTokens;
};

/// \var UsdInteractiveTokens
///
/// A global variable with static, efficient \link TfToken TfTokens\endlink
/// for use in all public USD API.  \sa UsdInteractiveTokensType
extern USDINTERACTIVE_API TfStaticData<UsdInteractiveTokensType> UsdInteractiveTokens;

PXR_NAMESPACE_CLOSE_SCOPE

#endif
