//
//  TNSAppEncryption.h
//  AppEncryption
//
//  Created by Yavor Georgiev on 2.10.15 г..
//  Copyright © 2015 г. Telerik. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TNSAppEncryption : NSObject

- (nullable NSData *)decrypt:(NSData *)payload iv:(NSData *)iv error:(NSError **)error;

@end

NS_ASSUME_NONNULL_END
