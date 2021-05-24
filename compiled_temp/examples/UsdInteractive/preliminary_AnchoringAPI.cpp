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
#include "pxr/usd/usdInteractive/preliminary_AnchoringAPI.h"
#include "pxr/usd/usd/schemaRegistry.h"
#include "pxr/usd/usd/typed.h"
#include "pxr/usd/usd/tokens.h"

#include "pxr/usd/sdf/types.h"
#include "pxr/usd/sdf/assetPath.h"

PXR_NAMESPACE_OPEN_SCOPE

// Register the schema with the TfType system.
TF_REGISTRY_FUNCTION(TfType)
{
    TfType::Define<UsdInteractivePreliminary_AnchoringAPI,
        TfType::Bases< UsdAPISchemaBase > >();
    
}

TF_DEFINE_PRIVATE_TOKENS(
    _schemaTokens,
    (Preliminary_AnchoringAPI)
);

/* virtual */
UsdInteractivePreliminary_AnchoringAPI::~UsdInteractivePreliminary_AnchoringAPI()
{
}

/* static */
UsdInteractivePreliminary_AnchoringAPI
UsdInteractivePreliminary_AnchoringAPI::Get(const UsdStagePtr &stage, const SdfPath &path)
{
    if (!stage) {
        TF_CODING_ERROR("Invalid stage");
        return UsdInteractivePreliminary_AnchoringAPI();
    }
    return UsdInteractivePreliminary_AnchoringAPI(stage->GetPrimAtPath(path));
}


/* virtual */
UsdSchemaKind UsdInteractivePreliminary_AnchoringAPI::_GetSchemaKind() const {
    return UsdInteractivePreliminary_AnchoringAPI::schemaKind;
}

/* virtual */
UsdSchemaKind UsdInteractivePreliminary_AnchoringAPI::_GetSchemaType() const {
    return UsdInteractivePreliminary_AnchoringAPI::schemaType;
}

/* static */
UsdInteractivePreliminary_AnchoringAPI
UsdInteractivePreliminary_AnchoringAPI::Apply(const UsdPrim &prim)
{
    if (prim.ApplyAPI<UsdInteractivePreliminary_AnchoringAPI>()) {
        return UsdInteractivePreliminary_AnchoringAPI(prim);
    }
    return UsdInteractivePreliminary_AnchoringAPI();
}

/* static */
const TfType &
UsdInteractivePreliminary_AnchoringAPI::_GetStaticTfType()
{
    static TfType tfType = TfType::Find<UsdInteractivePreliminary_AnchoringAPI>();
    return tfType;
}

/* static */
bool 
UsdInteractivePreliminary_AnchoringAPI::_IsTypedSchema()
{
    static bool isTyped = _GetStaticTfType().IsA<UsdTyped>();
    return isTyped;
}

/* virtual */
const TfType &
UsdInteractivePreliminary_AnchoringAPI::_GetTfType() const
{
    return _GetStaticTfType();
}

UsdAttribute
UsdInteractivePreliminary_AnchoringAPI::GetPreliminaryAnchoringTypeAttr() const
{
    return GetPrim().GetAttribute(UsdInteractiveTokens->preliminaryAnchoringType);
}

UsdAttribute
UsdInteractivePreliminary_AnchoringAPI::CreatePreliminaryAnchoringTypeAttr(VtValue const &defaultValue, bool writeSparsely) const
{
    return UsdSchemaBase::_CreateAttr(UsdInteractiveTokens->preliminaryAnchoringType,
                       SdfValueTypeNames->Token,
                       /* custom = */ false,
                       SdfVariabilityUniform,
                       defaultValue,
                       writeSparsely);
}

UsdAttribute
UsdInteractivePreliminary_AnchoringAPI::GetPreliminaryPlaneAnchoringAlignmentAttr() const
{
    return GetPrim().GetAttribute(UsdInteractiveTokens->preliminaryPlaneAnchoringAlignment);
}

UsdAttribute
UsdInteractivePreliminary_AnchoringAPI::CreatePreliminaryPlaneAnchoringAlignmentAttr(VtValue const &defaultValue, bool writeSparsely) const
{
    return UsdSchemaBase::_CreateAttr(UsdInteractiveTokens->preliminaryPlaneAnchoringAlignment,
                       SdfValueTypeNames->Token,
                       /* custom = */ false,
                       SdfVariabilityUniform,
                       defaultValue,
                       writeSparsely);
}

UsdRelationship
UsdInteractivePreliminary_AnchoringAPI::GetPreliminaryImageAnchoringReferenceImageRel() const
{
    return GetPrim().GetRelationship(UsdInteractiveTokens->preliminaryImageAnchoringReferenceImage);
}

UsdRelationship
UsdInteractivePreliminary_AnchoringAPI::CreatePreliminaryImageAnchoringReferenceImageRel() const
{
    return GetPrim().CreateRelationship(UsdInteractiveTokens->preliminaryImageAnchoringReferenceImage,
                       /* custom = */ false);
}

namespace {
static inline TfTokenVector
_ConcatenateAttributeNames(const TfTokenVector& left,const TfTokenVector& right)
{
    TfTokenVector result;
    result.reserve(left.size() + right.size());
    result.insert(result.end(), left.begin(), left.end());
    result.insert(result.end(), right.begin(), right.end());
    return result;
}
}

/*static*/
const TfTokenVector&
UsdInteractivePreliminary_AnchoringAPI::GetSchemaAttributeNames(bool includeInherited)
{
    static TfTokenVector localNames = {
        UsdInteractiveTokens->preliminaryAnchoringType,
        UsdInteractiveTokens->preliminaryPlaneAnchoringAlignment,
    };
    static TfTokenVector allNames =
        _ConcatenateAttributeNames(
            UsdAPISchemaBase::GetSchemaAttributeNames(true),
            localNames);

    if (includeInherited)
        return allNames;
    else
        return localNames;
}

PXR_NAMESPACE_CLOSE_SCOPE

// ===================================================================== //
// Feel free to add custom code below this line. It will be preserved by
// the code generator.
//
// Just remember to wrap code in the appropriate delimiters:
// 'PXR_NAMESPACE_OPEN_SCOPE', 'PXR_NAMESPACE_CLOSE_SCOPE'.
// ===================================================================== //
// --(BEGIN CUSTOM CODE)--
