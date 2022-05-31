set(PXR_PACKAGE UsdPhysics)

pxr_plugin(${PXR_PACKAGE}
    LIBRARIES
        tf
        sdf
        usd
        vt
        usdGeom

    INCLUDE_DIRS
        ${Boost_INCLUDE_DIRS}
        ${PYTHON_INCLUDE_DIRS}

    PUBLIC_HEADERS
        api.h

    PUBLIC_CLASSES
        preliminary_InfiniteColliderPlane
        preliminary_PhysicsColliderAPI
        preliminary_PhysicsForce
        preliminary_PhysicsGravitationalForce
        preliminary_PhysicsMaterialAPI
        preliminary_PhysicsRigidBodyAPI
        tokens

    PYTHON_CPPFILES
        moduleDeps.cpp    

    PYMODULE_FILES
        __init__.py

    PYMODULE_CPPFILES
        module.cpp
        wrapPreliminary_InfiniteColliderPlane.cpp
        wrapPreliminary_PhysicsColliderAPI.cpp
        wrapPreliminary_PhysicsForce.cpp
        wrapPreliminary_PhysicsGravitationalForce.cpp
        wrapPreliminary_PhysicsMaterialAPI.cpp
        wrapPreliminary_PhysicsRigidBodyAPI.cpp
        wrapTokens.cpp        

    RESOURCE_FILES
        generatedSchema.usda
        plugInfo.json
        schema.usda:usdPhysics/schema.usda
)