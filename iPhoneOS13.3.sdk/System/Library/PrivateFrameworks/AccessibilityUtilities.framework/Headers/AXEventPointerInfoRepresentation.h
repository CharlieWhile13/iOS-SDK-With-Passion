//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/AXEventRepresentationDescription-Protocol.h>

@class NSString;

@interface AXEventPointerInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying>
{
    double _pointerX;
    double _pointerY;
    double _pointerZ;
    double _pointerAccelX;
    double _pointerAccelY;
    double _pointerAccelZ;
    double _pointerButtonMask;
    double _pointerButtonNumber;
    double _pointerButtonClickCount;
    double _pointerButtonPressure;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) double pointerButtonPressure; // @synthesize pointerButtonPressure=_pointerButtonPressure;
@property(nonatomic) double pointerButtonClickCount; // @synthesize pointerButtonClickCount=_pointerButtonClickCount;
@property(nonatomic) double pointerButtonNumber; // @synthesize pointerButtonNumber=_pointerButtonNumber;
@property(nonatomic) double pointerButtonMask; // @synthesize pointerButtonMask=_pointerButtonMask;
@property(nonatomic) double pointerAccelZ; // @synthesize pointerAccelZ=_pointerAccelZ;
@property(nonatomic) double pointerAccelY; // @synthesize pointerAccelY=_pointerAccelY;
@property(nonatomic) double pointerAccelX; // @synthesize pointerAccelX=_pointerAccelX;
@property(nonatomic) double pointerZ; // @synthesize pointerZ=_pointerZ;
@property(nonatomic) double pointerY; // @synthesize pointerY=_pointerY;
@property(nonatomic) double pointerX; // @synthesize pointerX=_pointerX;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (id)accessibilityEventRepresentationTabularDescription;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;

@end

