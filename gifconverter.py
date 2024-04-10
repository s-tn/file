import glob
import contextlib
from PIL import Image

# filepaths
#fp_out = "/home/arglasses/OLED_Module_Code/RasberryPi/python/animation/image_*.png"
#fp_in = "/home/arglasses/OLED_Module_Code/RasberryPi/python/animation.gif"

fp_out = "/Users/jmbry/file/anim"
fp_in = "/Users/jmbry/file/anim/animation.gif"

# use exit stack to automatically close opened images

with Image.open(fp_in) as img:
    # Loop over each frame in the GIF
    for frame_number in range(img.n_frames):
        # Move to the next frame
        img.seek(frame_number)

        # Construct the filename for each frame
        frame_filename = f"{fp_out}/frame_{frame_number}.png"

        # Save the current frame
        img.save(frame_filename)

        with Image.open(frame_filename) as frame:
            frame = frame.resize((128, 64))
            frame.save(frame_filename)