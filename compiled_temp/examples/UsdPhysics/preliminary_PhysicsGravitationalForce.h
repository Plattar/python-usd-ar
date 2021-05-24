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
#ifndef USDPHYSICS_GENERATED_PRELIMINARY_PHYSICSGRAVITATIONALFORCE_H
#define USDPHYSICS_GENERATED_PRELIMINARY_PHYSICSGRAVITATIONALFORCE_H

/// \file usdPhysics/preliminary_PhysicsGravitationalForce.h

#include "pxr/pxr.h"
#include "pxr/usd/usdPhysics/api.h"
#include "pxr/usd/usdPhysics/preliminary_PhysicsForce.h"
#include "pxr/usd/usd/prim.h"
#include "pxr/usd/usd/stage.h"
#include "pxr/usd/usdPhysics/tokens.h"

#include "pxr/base/vt/value.h"

#include "pxr/base/gf/vec3d.h"
#include "pxr/base/gf/vec3f.h"
#include "pxr/base/gf/matrix4d.h"

#include "pxr/base/tf/token.h"
#include "pxr/base/tf/type.h"

PXR_NAMESPACE_OPEN_SCOPE

class SdfAssetPath;

// -------------------------------------------------------------------------- //
// PRELIMINARY_PHYSICSGRAVITATIONALFORCE                                      //
// -------------------------------------------------------------------------- //

/// \class UsdPhysicsPreliminary_PhysicsGravitationalForce
///
/// Physical force exerted by some gravitational field on objects within it.
/// 
///
class UsdPhysicsPreliminary_PhysicsGravitationalForce : public UsdPhysicsPreliminary_PhysicsForce
{
public:
    /// Compile time constant representing what kind of schema this class is.
    ///
    /// \sa UsdSchemaKind
    static const UsdSchemaKind schemaKind = UsdSchemaKind::ConcreteTyped;

    /// \deprecated
    /// Same as schemaKind, provided to maintain temporary backward 
    /// compatibility with older generated schemas.
    static const UsdSchemaKind schemaType = UsdSchemaKind::ConcreteTyped;

    /// Construct a UsdPhysicsPreliminary_PhysicsGravitationalForce on UsdPrim \p prim .
    /// Equivalent to UsdPhysicsPreliminary_PhysicsGravitationalForce::Get(prim.GetStage(), prim.GetPath())
    /// for a \em valid \p prim, but will not immediately throw an error for
    /// an invalid \p prim
    explicit UsdPhysicsPreliminary_PhysicsGravitationalForce(const UsdPrim& prim=UsdPrim())
        : UsdPhysicsPreliminary_PhysicsForce(prim)
    {
    }

    /// Construct a UsdPhysicsPreliminary_PhysicsGravitationalForce on the prim held by \p schemaObj .
    /// Should be preferred over UsdPhysicsPreliminary_PhysicsGravitationalForce(schemaObj.GetPrim()),
    /// as it preserves SchemaBase state.
    explicit UsdPhysicsPreliminary_PhysicsGravitationalForce(const UsdSchemaBase& schemaObj)
        : UsdPhysicsPreliminary_PhysicsForce(schemaObj)
    {
    }

    /// Destructor.
    USDPHYSICS_API
    virtual ~UsdPhysicsPreliminary_PhysicsGravitationalForce();

    /// Return a vector of names of all pre-declared attributes for this schema
    /// class and all its ancestor classes.  Does not include attributes that
    /// may be authored by custom/extended methods of the schemas involved.
    USDPHYSICS_API
    static const TfTokenVector &
    GetSchemaAttributeNames(bool includeInherited=true);

    /// Return a UsdPhysicsPreliminary_PhysicsGravitationalForce holding the prim adhering to this
    /// schema at \p path on \p stage.  If no prim exists at \p path on
    /// \p stage, or if the prim at that path does not adhere to this schema,
    /// return an invalid schema object.  This is shorthand for the following:
    ///
    /// \code
    /// UsdPhysicsPreliminary_PhysicsGravitationalForce(stage->GetPrimAtPath(path));
    /// \endcode
    ///
    USDPHYSICS_API
    static UsdPhysicsPreliminary_PhysicsGravitationalForce
    Get(const UsdStagePtr &stage, const SdfPath &path);

    /// Attempt to ensure a \a UsdPrim adhering to this schema at \p path
    /// is defined (according to UsdPrim::IsDefined()) on this stage.
    ///
    /// If a prim adhering to this schema at \p path is already defined on this
    /// stage, return that prim.  Otherwise author an \a SdfPrimSpec with
    /// \a specifier == \a SdfSpecifierDef and this schema's prim type name for
    /// the prim at \p path at the current EditTarget.  Author \a SdfPrimSpec s
    /// with \p specifier == \a SdfSpecifierDef and empty typeName at the
    /// current EditTarget for any nonexistent, or existing but not \a Defined
    /// ancestors.
    ///
    /// The given \a path must be an absolute prim path that does not contain
    /// any variant selections.
    ///
    /// If it is impossible to author any of the necessary PrimSpecs, (for
    /// example, in case \a path cannot map to the current UsdEditTarget's
    /// namespace) issue an error and return an invalid \a UsdPrim.
    ///
    /// Note that this method may return a defined prim whose typeName does not
    /// specify this schema class, in case a stronger typeName opinion overrides
    /// the opinion at the current EditTarget.
    ///
    USDPHYSICS_API
    static UsdPhysicsPreliminary_PhysicsGravitationalForce
    Define(const UsdStagePtr &stage, const SdfPath &path);

protected:
    /// Returns the kind of schema this class belongs to.
    ///
    /// \sa UsdSchemaKind
    USDPHYSICS_API
    UsdSchemaKind _GetSchemaKind() const override;

    /// \deprecated
    /// Same as _GetSchemaKind, provided to maintain temporary backward 
    /// compatibility with older generated schemas.
    USDPHYSICS_API
    UsdSchemaKind _GetSchemaType() const override;

private:
    // needs to invoke _GetStaticTfType.
    friend class UsdSchemaRegistry;
    USDPHYSICS_API
    static const TfType &_GetStaticTfType();

    static bool _IsTypedSchema();

    // override SchemaBase virtuals.
    USDPHYSICS_API
    const TfType &_GetTfType() const override;

public:
    // --------------------------------------------------------------------- //
    // PHYSICSGRAVITATIONALFORCEACCELERATION 
    // --------------------------------------------------------------------- //
    /// Local space vector defining the direction and magnitude of the gravitational force's acceleration effect.
    /// Units are in meters per second squared.
    /// The default value is the Earth's gravity, assuming upAxis is +Y.
    /// Affected by the value of upAxis and by its parent's transform
    /// 
    ///
    /// | ||
    /// | -- | -- |
    /// | Declaration | `uniform vector3d physics:gravitationalForce:acceleration = (0, -9.81, 0)` |
    /// | C++ Type | GfVec3d |
    /// | \ref Usd_Datatypes "Usd Type" | SdfValueTypeNames->Vector3d |
    /// | \ref SdfVariability "Variability" | SdfVariabilityUniform |
    USDPHYSICS_API
    UsdAttribute GetPhysicsGravitationalForceAccelerationAttr() const;

    /// See GetPhysicsGravitationalForceAccelerationAttr(), and also 
    /// \ref Usd_Create_Or_Get_Property for when to use Get vs Create.
    /// If specified, author \p defaultValue as the attribute's default,
    /// sparsely (when it makes sense to do so) if \p writeSparsely is \c true -
    /// the default for \p writeSparsely is \c false.
    USDPHYSICS_API
    UsdAttribute CreatePhysicsGravitationalForceAccelerationAttr(VtValue const &defaultValue = VtValue(), bool writeSparsely=false) const;

public:
    // ===================================================================== //
    // Feel free to add custom code below this line, it will be preserved by 
    // the code generator. 
    //
    // Just remember to: 
    //  - Close the class declaration with }; 
    //  - Close the namespace with PXR_NAMESPACE_CLOSE_SCOPE
    //  - Close the include guard with #endif
    // ===================================================================== //
    // --(BEGIN CUSTOM CODE)--
};

PXR_NAMESPACE_CLOSE_SCOPE

#endif
