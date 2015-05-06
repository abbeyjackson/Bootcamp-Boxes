//
//  main.c
//  Boxes
//
//  Created by Abegael Jackson on 2015-05-05.
//  Copyright (c) 2015 Abegael Jackson. All rights reserved.
//

#include <stdio.h>


struct box {
    float width;
    float height;
    float length;
};
typedef struct box Box;


float calcVolume(Box aBox);
Box createBox(float width, float height, float length);
float compareBoxesSizes(Box leftHandBox, Box rightHandBox);


int main(int argc, const char * argv[]) {
    
    Box box1 = createBox(1.2f, 2.f, 1.f);
    //   same as:
    //    box1.width = 2;
    //    box1.height = 2.2f;
    //    box1.length = 2.f;
    //   also same as:
    Box box2 = { .width = 2.f, .height = 3.f, .length = 1.f };
    

    printf("%f", calcVolume(box1));

    return 0;
}


float calcVolume(Box aBox) {
    float result = aBox.width * aBox.height * aBox.length; // are members / properties
    
    return result;
}

Box createBox(float w, float h, float l){ // w, h, l are variables
    Box newBox; // is variable
    
    newBox.width = w; // newBox.width == 1.2f
    newBox.height = h;
    newBox.length = l;
    
    return newBox;
}

float compareBoxesSizes(Box leftHandBox, Box rightHandBox) {
    
    float ratio = calcVolume(leftHandBox) / calcVolume(rightHandBox);
    return ratio;
    
}

