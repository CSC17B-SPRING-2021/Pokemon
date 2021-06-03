class Game_Map
  def bush?(x,y)
    return false if !valid?(x,y)

    layered_tiles(x, y).each do |tile_id|
      if tile_id != 0
        return tileset.flags[tile_id] & 0x40 != 0
      end
    end

    return false
  end
end