//
//  Receiver.h
//  MutableArray
//
//  Created by John Szumski on 1/28/18.
//  Copyright © 2018 John Szumski. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol SomeProtocol

@end


@interface Receiver : NSObject

- (void)foo:(NSMutableArray<SomeProtocol>*)array;

@end
