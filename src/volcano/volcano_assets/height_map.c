#include <world/world.h>

extern HeightMapPatch volcano_heightMap_patches[];
extern HeightMapTreeNode volcano_heightMap_tree[];

HeightMap volcano_heightMap = {
    volcano_heightMap_patches,
    volcano_heightMap_tree
};
