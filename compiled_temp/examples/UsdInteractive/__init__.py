from . import _usdInteractive
from pxr import Tf
Tf.PrepareModule(_usdInteractive, locals())
del Tf

try:
    from . import __DOC
    __DOC.Execute(locals())
    del __DOC
except Exception:
    pass