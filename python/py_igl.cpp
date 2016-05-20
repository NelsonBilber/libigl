#include <Eigen/Dense>

#include "python_shared.h"

#include <igl/readOFF.h>
#include <igl/writeOBJ.h>
#include <igl/per_face_normals.h>
#include <igl/per_corner_normals.h>
#include <igl/per_vertex_normals.h>
#include <igl/gaussian_curvature.h>
#include <igl/jet.h>
#include <igl/read_triangle_mesh.h>
#include <igl/cotmatrix.h>
#include <igl/massmatrix.h>
#include <igl/invert_diag.h>
#include <igl/principal_curvature.h>
#include <igl/parula.h>
#include <igl/readDMAT.h>
#include <igl/grad.h>
#include <igl/avg_edge_length.h>
#include <igl/barycenter.h>
#include <igl/doublearea.h>
#include <igl/floor.h>
#include <igl/slice.h>
#include <igl/slice_into.h>
#include <igl/sortrows.h>
#include <igl/colon.h>
#include <igl/boundary_facets.h>
#include <igl/unique.h>
#include <igl/setdiff.h>
#include <igl/min_quad_with_fixed.h>
#include <igl/SolverStatus.h>
#include <igl/active_set.h>
#include <igl/eigs.h>
#include <igl/readOBJ.h>
#include <igl/harmonic.h>
#include <igl/arap.h>
#include <igl/ARAPEnergyType.h>
#include <igl/boundary_loop.h>
#include <igl/map_vertices_to_circle.h>
#include <igl/lscm.h>
#include <igl/local_basis.h>
#include <igl/rotate_vectors.h>
#include <igl/compute_frame_field_bisectors.h>
#include <igl/comb_cross_field.h>
#include <igl/cross_field_missmatch.h>
#include <igl/find_cross_field_singularities.h>
#include <igl/cut_mesh_from_singularities.h>
#include <igl/comb_frame_field.h>
#include <igl/n_polyvector.h>

#include <igl/point_mesh_squared_distance.h>
#include <igl/AABB.h>
#include <igl/readMESH.h>
#include <igl/writeMESH.h>
#include <igl/slice_tets.h>
#include <igl/edge_lengths.h>
#include <igl/upsample.h>
#include <igl/cat.h>
#include <igl/per_edge_normals.h>
#include <igl/barycentric_coordinates.h>
#include <igl/fit_rotations.h>
#include <igl/polar_svd.h>
#include <igl/covariance_scatter_matrix.h>


void python_export_igl(py::module &m)
{
#include "py_igl/py_readOFF.cpp"
#include "py_igl/py_writeOBJ.cpp"
#include "py_igl/py_per_face_normals.cpp"
#include "py_igl/py_per_corner_normals.cpp"
#include "py_igl/py_per_vertex_normals.cpp"
#include "py_igl/py_gaussian_curvature.cpp"
#include "py_igl/py_jet.cpp"
#include "py_igl/py_read_triangle_mesh.cpp"
#include "py_igl/py_cotmatrix.cpp"
#include "py_igl/py_massmatrix.cpp"
#include "py_igl/py_invert_diag.cpp"
#include "py_igl/py_principal_curvature.cpp"
#include "py_igl/py_parula.cpp"
#include "py_igl/py_readDMAT.cpp"
#include "py_igl/py_grad.cpp"
#include "py_igl/py_avg_edge_length.cpp"
#include "py_igl/py_barycenter.cpp"
#include "py_igl/py_doublearea.cpp"
#include "py_igl/py_floor.cpp"
#include "py_igl/py_slice.cpp"
#include "py_igl/py_slice_into.cpp"
#include "py_igl/py_sortrows.cpp"
#include "py_igl/py_colon.cpp"
#include "py_igl/py_boundary_facets.cpp"
#include "py_igl/py_unique.cpp"
#include "py_igl/py_setdiff.cpp"
#include "py_igl/py_min_quad_with_fixed.cpp"
#include "py_igl/py_SolverStatus.cpp"
#include "py_igl/py_active_set.cpp"
#include "py_igl/py_eigs.cpp"
#include "py_igl/py_readOBJ.cpp"
#include "py_igl/py_harmonic.cpp"
#include "py_igl/py_ARAPEnergyType.cpp"
#include "py_igl/py_arap.cpp"
#include "py_igl/py_boundary_loop.cpp"
#include "py_igl/py_map_vertices_to_circle.cpp"
#include "py_igl/py_lscm.cpp"
#include "py_igl/py_local_basis.cpp"
#include "py_igl/py_rotate_vectors.cpp"
#include "py_igl/py_compute_frame_field_bisectors.cpp"
#include "py_igl/py_comb_cross_field.cpp"
#include "py_igl/py_cross_field_missmatch.cpp"
#include "py_igl/py_find_cross_field_singularities.cpp"
#include "py_igl/py_cut_mesh_from_singularities.cpp"
#include "py_igl/py_comb_frame_field.cpp"
#include "py_igl/py_n_polyvector.cpp"

#include "py_igl/py_point_mesh_squared_distance.cpp"
#include "py_igl/py_AABB.cpp"
#include "py_igl/py_readMESH.cpp"
#include "py_igl/py_writeMESH.cpp"
#include "py_igl/py_slice_tets.cpp"
#include "py_igl/py_edge_lengths.cpp"
#include "py_igl/py_upsample.cpp"
#include "py_igl/py_cat.cpp"
#include "py_igl/py_per_edge_normals.cpp"
#include "py_igl/py_barycentric_coordinates.cpp"
#include "py_igl/py_fit_rotations.cpp"
#include "py_igl/py_polar_svd.cpp"
#include "py_igl/py_covariance_scatter_matrix.cpp"

}
