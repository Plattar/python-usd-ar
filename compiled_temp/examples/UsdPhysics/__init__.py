from . import _UsdPhysics
from pxr import Tf
Tf.PrepareModule(_UsdPhysics, locals())
del Tf

try:
    from . import __DOC
    __DOC.Execute(locals())
    del __DOC
except Exception:
    pass