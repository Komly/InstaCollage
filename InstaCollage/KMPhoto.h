//
//  KMPhoto.h
//  InstaCollage
//
//  Created by Дмитрий on 05.09.14.
//  Copyright (c) 2014 Петров Дмитрий. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KMPhoto : NSObject

@property (nonatomic, strong) NSURL *lowUrl;
@property (nonatomic, strong) NSURL *standardUrl;
@property (nonatomic, strong) NSURL *thumbnailUrl;

@property (nonatomic, assign) BOOL selected;

@end
