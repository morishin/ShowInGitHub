/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEInspectorProperty.h>

@class DVTFontTextField, NSStepper;

@interface IDEInspectorFontProperty : IDEInspectorProperty
{
    DVTFontTextField *_textField;
    NSStepper *_stepper;
}

- (double)baseline;
- (id)bindAndConfigure;
- (void)incrementSize:(id)arg1;
@property NSStepper *stepper; // @synthesize stepper=_stepper;
@property DVTFontTextField *textField; // @synthesize textField=_textField;
- (void)userDidChangeValue:(id)arg1;

@end

