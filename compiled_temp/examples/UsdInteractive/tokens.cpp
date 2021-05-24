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
#include "pxr/usd/usdInteractive/tokens.h"

PXR_NAMESPACE_OPEN_SCOPE

UsdInteractiveTokensType::UsdInteractiveTokensType() :
    actions("actions", TfToken::Immortal),
    allow("allow", TfToken::Immortal),
    any("any", TfToken::Immortal),
    baseline("baseline", TfToken::Immortal),
    bottom("bottom", TfToken::Immortal),
    center("center", TfToken::Immortal),
    content("content", TfToken::Immortal),
    depth("depth", TfToken::Immortal),
    exclusive("exclusive", TfToken::Immortal),
    face("face", TfToken::Immortal),
    flowing("flowing", TfToken::Immortal),
    font("font", TfToken::Immortal),
    hardBreaks("hardBreaks", TfToken::Immortal),
    height("height", TfToken::Immortal),
    horizontal("horizontal", TfToken::Immortal),
    horizontalAlignment("horizontalAlignment", TfToken::Immortal),
    ignore("ignore", TfToken::Immortal),
    image("image", TfToken::Immortal),
    infoId("info:id", TfToken::Immortal),
    justified("justified", TfToken::Immortal),
    left("left", TfToken::Immortal),
    lowerMiddle("lowerMiddle", TfToken::Immortal),
    middle("middle", TfToken::Immortal),
    multiplePerformOperation("multiplePerformOperation", TfToken::Immortal),
    none("none", TfToken::Immortal),
    physicalWidth("physicalWidth", TfToken::Immortal),
    plane("plane", TfToken::Immortal),
    pointSize("pointSize", TfToken::Immortal),
    preliminaryAnchoringType("preliminary:anchoring:type", TfToken::Immortal),
    preliminaryImageAnchoringReferenceImage("preliminary:imageAnchoring:referenceImage", TfToken::Immortal),
    preliminaryPlaneAnchoringAlignment("preliminary:planeAnchoring:alignment", TfToken::Immortal),
    right("right", TfToken::Immortal),
    singleLine("singleLine", TfToken::Immortal),
    stop("stop", TfToken::Immortal),
    top("top", TfToken::Immortal),
    triggers("triggers", TfToken::Immortal),
    vertical("vertical", TfToken::Immortal),
    verticalAlignment("verticalAlignment", TfToken::Immortal),
    width("width", TfToken::Immortal),
    wrapMode("wrapMode", TfToken::Immortal),
    allTokens({
        actions,
        allow,
        any,
        baseline,
        bottom,
        center,
        content,
        depth,
        exclusive,
        face,
        flowing,
        font,
        hardBreaks,
        height,
        horizontal,
        horizontalAlignment,
        ignore,
        image,
        infoId,
        justified,
        left,
        lowerMiddle,
        middle,
        multiplePerformOperation,
        none,
        physicalWidth,
        plane,
        pointSize,
        preliminaryAnchoringType,
        preliminaryImageAnchoringReferenceImage,
        preliminaryPlaneAnchoringAlignment,
        right,
        singleLine,
        stop,
        top,
        triggers,
        vertical,
        verticalAlignment,
        width,
        wrapMode
    })
{
}

TfStaticData<UsdInteractiveTokensType> UsdInteractiveTokens;

PXR_NAMESPACE_CLOSE_SCOPE
