
extends Panel

# member variables here, example:
# var a=2
# var b="textvar"

func _ready():
	get_node("Button").connect("pressed", self, "_on_button_pressed")
	get_node("Button").connect("released", self, "_on_button_released")

func _on_button_pressed():
	get_node("Label").set_text("FooBar")

func _on_button_released():
	get_node("Label").set_text("Woooosh")