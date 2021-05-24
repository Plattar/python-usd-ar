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
#include "pxr/usd/usdPhysics/preliminary_PhysicsRigidBodyAPI.h"
#include "pxr/usd/usd/schemaRegistry.h"
#include "pxr/usd/usd/typed.h"
#include "pxr/usd/usd/tokens.h"

#include "pxr/usd/sdf/types.h"
#include "pxr/usd/sdf/assetPath.h"

PXR_NAMESPACE_OPEN_SCOPE

// Register the schema with the TfType system.
TF_REGISTRY_FUNCTION(TfType)
{
    TfType::Define<UsdPhysicsPreliminary_PhysicsRigidBodyAPI,
        TfType::Bases< UsdAPISchemaBase > >();
    
}

TF_DEFINE_PRIVATE_TOKENS(
    _schemaTokens,
    (Preliminary_PhysicsRigidBodyAPI)
);

/* virtual */
UsdPhysicsPreliminary_PhysicsRigidBodyAPI::~UsdPhysicsPreliminary_PhysicsRigidBodyAPI()
{
}

/* static */
UsdPhysicsPreliminary_PhysicsRigidBodyAPI
UsdPhysicsPreliminary_PhysicsRigidBodyAPI::Get(const UsdStagePtr &stage, const SdfPath &path)
{
    if (!stage) {
        TF_CODING_ERROR("Invalid stage");
        return UsdPhysicsPreliminary_PhysicsRigidBodyAPI();
    }
    return UsdPhysicsPreliminary_PhysicsRigidBodyAPI(stage->GetPrimAtPath(path));
}


/* virtual */
UsdSchemaKind UsdPhysicsPreliminary_PhysicsRigidBodyAPI::_GetSchemaKind() const {
    return UsdPhysicsPreliminary_PhysicsRigidBodyAPI::schemaKind;
}

/* virtual */
UsdSchemaKind UsdPhysicsPreliminary_PhysicsRigidBodyAPI::_GetSchemaType() const {
    return UsdPhysicsPreliminary_PhysicsRigidBodyAPI::schemaType;
}

/* static */
UsdPhysicsPreliminary_PhysicsRigidBodyAPI
UsdPhysicsPreliminary_PhysicsRigidBodyAPI::Apply(const UsdPrim &prim)
{
    if (prim.ApplyAPI<UsdPhysicsPreliminary_PhysicsRigidBodyAPI>()) {
        return UsdPhysicsPreliminary_PhysicsRigidBodyAPI(prim);
    }
    return UsdPhysicsPreliminary_PhysicsRigidBodyAPI();
}

/* static */
const TfType &
UsdPhysicsPreliminary_PhysicsRigidBodyAPI::_GetStaticTfType()
{
    static TfType tfType = TfType::Find<UsdPhysicsPreliminary_PhysicsRigidBodyAPI>();
    return tfType;
}

/* static */
bool 
UsdPhysicsPreliminary_PhysicsRigidBodyAPI::_IsTypedSchema()
{
    static bool isTyped = _GetStaticTfType().IsA<UsdTyped>();
    return isTyped;
}

/* virtual */
const TfType &
UsdPhysicsPreliminary_PhysicsRigidBodyAPI::_GetTfType() const
{
    return _GetStaticTfType();
}

UsdAttribute
UsdPhysicsPreliminary_PhysicsRigidBodyAPI::GetPreliminaryPhysicsRigidBodyMassAttr() const
{
    return GetPrim().GetAttribute(UsdPhysicsTokens->preliminaryPhysicsRigidBodyMass);
}

UsdAttribute
UsdPhysicsPreliminary_PhysicsRigidBodyAPI::CreatePreliminaryPhysicsRigidBodyMassAttr(VtValue const &defaultValue, bool writeSparsely) const
{
    return UsdSchemaBase::_CreateAttr(UsdPhysicsTokens->preliminaryPhysicsRigidBodyMass,
                       SdfValueTypeNames->Double,
                       /* custom = */ false,
                       SdfVariabilityUniform,
                       defaultValue,
                       writeSparsely);
}

UsdAttribute
UsdPhysicsPreliminary_PhysicsRigidBodyAPI::GetPreliminaryPhysicsRigidBodyInitiallyActiveAttr() const
{
    return GetPrim().GetAttribute(UsdPhysicsTokens->preliminaryPhysicsRigidBodyInitiallyActive);
}

UsdAttribute
UsdPhysicsPreliminary_PhysicsRigidBodyAPI::CreatePreliminaryPhysicsRigidBodyInitiallyActiveAttr(VtValue const &defaultValue, bool writeSparsely) const
{
    return UsdSchemaBase::_CreateAttr(UsdPhysicsTokens->preliminaryPhysicsRigidBodyInitiallyActive,
                       SdfValueTypeNames->Bool,
                       /* custom = */ false,
                       SdfVariabilityUniform,
                       defaultValue,
                       writeSparsely);
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
UsdPhysicsPreliminary_PhysicsRigidBodyAPI::GetSchemaAttributeNames(bool includeInherited)
{
    static TfTokenVector localNames = {
        UsdPhysicsTokens->preliminaryPhysicsRigidBodyMass,
        UsdPhysicsTokens->preliminaryPhysicsRigidBodyInitiallyActive,
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
